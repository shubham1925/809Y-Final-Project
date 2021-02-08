#include <iostream>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

class DataBaseConnect{
public:
	virtual bool login(string username, string password){
		return true;
	}
	virtual bool logout(string username){
		return true;
	}
	virtual int fetchRecord(){
		return -1;
	}
};

class Mockdb : public DataBaseConnect{
public:
	MOCK_METHOD0(fetchRecord, int());
	MOCK_METHOD1(logout, bool(string username));
	MOCK_METHOD2(login, bool(string username, string password));
};

class MyDatabase{
	DataBaseConnect &dbc;
public:
	MyDatabase(DataBaseConnect & _dbc) : dbc(_dbc){}

	int Init(string username, string password){
		if(dbc.login(username, password) != true){
			cout << "Failure" << endl;
			return -1;
		}
		else{
			cout << "Success" << endl;
			return 1;
		}
	}
};

TEST(Mydbtest, LoginTest){
	Mockdb mdb;
	MyDatabase db(mdb);
	EXPECT_CALL(mdb, login("shubham", "hello")).Times(1).WillOnce(Return(true));
	int retval = db.Init("shubham", "hello");
	EXPECT_EQ(retval, 1);
}

int main(int argc, char **argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

// g++ mocking.cpp -std=c++11 -lgtest -lgtest_main -lgmock -pthread