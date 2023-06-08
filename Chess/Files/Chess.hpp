# ifndef __CHESS_ENV
    /**
     * @file Chess.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief Chess Environment for Chess Projects
     * @version 0.1
     * @date 2023-06-08
     */
    # define __CHESS_ENV
    //-- Include Needed Libraries
    # include <string>
    # include <vector>
    # include <iostream>
    # include <opencv4/opencv2/highgui.hpp>
    # include <opencv4/opencv2/imgproc.hpp>
    //-- List of Valid Chess Pieces
    enum PieceTypes {
        PAWN,
        KNIGHT,
        BISHOP,
        ROOK,
        QUEEN,
        KING
    };
    //-- Vector of Pieces Names
    std::vector<std::string> piecesList = {
        "Pawn"
        "Knight",
        "Bishop",
        "Rook",
        "Queen",
        "King",
    };
    //-- Piece Sides
    enum PieceColors {
        WHITE,
        BLACK
    };
    /**
     * @brief Chess Piece Class Definition
     */
    class Piece {
        protected:
            /**
             * @brief Piece Name
             */
            std::string name;
            /**
             * @brief Piece Type
             */
            int type;
            /**
             * @brief Piece Color
             */
            int color;
            /**
             * @brief Piece Position
             */
            char position[2];
            int x, y;
        public:
            /**
             * @brief Piece Class Constructor
             * @note if Parameters are Empty, Constructor Default Piece is Pawn
             * @param _type Type of Piece, Look PieceTypes
             * @param _color Color of Piece, Look PieceColors
             */
            Piece(const int &_type, const int &_color);
            /**
             * @brief Method to Check Piece Data
             * @return true 
             * @return false
             */
            bool checkPieceData();
            /**
             * @brief Method to Check Piece Position
             * @return true 
             * @return false 
             */
            bool checkPiecePos();
            // check piece type and name
            // check piece position
            // check amount of pieces
            // add piece in no param then init a "pawn"
            // remove piece
            // change pos piece
            // edit piece
    };
    /**
     * @brief Chess Environment Class Definition
     */
    class Chess : public Piece {
        private:
            /**
             * @brief Chess Environment Window
             */
            cv::Mat window;
            /**
             * @brief Object to Initialize and Edit Chess Piece
             */
            Piece piece;
        public:
            /**
             * @brief Chess Class Constructor
             */
            Chess(int &size);
            /**
             * @brief Method to Initialize Chess Board
             * @param size Size of Chess Board
             * @return true
             * @return false 
             */
            bool init();
            bool generateBoardImage();
    };
# endif // __CHESS_ENV