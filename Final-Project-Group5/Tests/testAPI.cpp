#include <gtest/gtest.h>
#include <iostream>
#include "/home/shubham/809Y-Final-Project/Final-Project-Group5/src/API/api.h"

class ApiTest : public ::testing::Test{
public:
	std::string expected = "false";

};

TEST_F(ApiTest, testmazeWidth){
	// fp::API api;
	ASSERT_EQ(1, fp::API::mazeWidth());
}

TEST_F(ApiTest, testmazeHeight){
	ASSERT_EQ(1, fp::API::mazeHeight());
}

TEST_F(ApiTest, testwallFront){
	std::string result = "false";
	// std::string expected = "false";
	
	if(fp::API::wallFront())
		result = "true";	
	EXPECT_EQ(expected, result);
}

TEST_F(ApiTest, testwallRight){
	ASSERT_EQ(0, fp::API::wallRight());
}

TEST_F(ApiTest, testwallLeft){
	ASSERT_EQ(0, fp::API::wallLeft());
}

int main(int argc, char** argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
