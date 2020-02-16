.PHONY: clean All

All:
	@echo "----------Building project:[ Assignment8 - Release ]----------"
	@cd "Assignment8" && "$(MAKE)" -f  "Assignment8.mk"
clean:
	@echo "----------Cleaning project:[ Assignment8 - Release ]----------"
	@cd "Assignment8" && "$(MAKE)" -f  "Assignment8.mk" clean
