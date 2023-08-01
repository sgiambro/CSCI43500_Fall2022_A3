ImageEditor: ImageEditor.o
	g++ -g ImageEditor.o -o ImageEditor
ImageEditor.o: ImageEditor.cpp
	g++ -c ImageEditor.cpp
clean:
	rm -f *.o
run: ImageEditor
	./ImageEditor
