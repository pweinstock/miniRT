NAME=a.out

FLAGS = -Wall -Wextra -Werror

MLXFLAGS =		./minilibx_macos/libmlx.a -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): lib $(OBJ)
	gcc ./parser/parser.a ./libcam/libcam.a ./libmat/libmat.a ./libmath/libmath.a ./shapes/shapes.a ./libray/libray.a ./libvec/libvec.a ./plot_scene.c ./main.c $(FLAGS) $(MLXFLAGS)
	./a.out test.rt

lib:
	make -C ./parser
	make -C ./libcam
	make -C ./libmat
	make -C ./libmath
	make -C ./libray
	make -C ./libvec
	make -C ./shapes


clean:
	rm -f ./a.out
	make clean -C ./parser
	make clean -C ./libcam
	make clean -C ./libmat
	make clean -C ./libmath
	make clean -C ./libray
	make clean -C ./libvec
	make clean -C ./shapes

fclean: clean
	make fclean -C ./parser
	make fclean -C ./libcam
	make fclean -C ./libmat
	make fclean -C ./libmath
	make fclean -C ./libray
	make fclean -C ./libvec
	make fclean -C ./shapes

re: clean all