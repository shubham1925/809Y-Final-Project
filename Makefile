.PHONY: clean All

All:
	@echo "----------Building project:[ Final-Project-Group5 - Debug ]----------"
	@cd "Final-Project-Group5" && "$(MAKE)" -f  "Final-Project-Group5.mk"
clean:
	@echo "----------Cleaning project:[ Final-Project-Group5 - Debug ]----------"
	@cd "Final-Project-Group5" && "$(MAKE)" -f  "Final-Project-Group5.mk" clean
