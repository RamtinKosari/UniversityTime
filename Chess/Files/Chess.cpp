# ifndef __CHESS_ENV
    # include "Chess.hpp"
    /**
     * @brief Piece Class Constructor
     * @note if Parameters are Empty, Constructor Default Piece is Pawn
     * @param _type Type of Piece, Look PieceTypes
     * @param _color Color of Piece, Look PieceColors
     */
    Piece::Piece(const int &_type = PAWN, const int &_color = WHITE) {
        name = piecesList[_type];
        color = _color;
        type = _type;
        //-- Check Piece Data
        if (checkPieceData() == false) {
            
        }
    }
    /**
     * @brief Method Check Piece Data
     * @return true 
     * @return false
     */
    bool Piece::checkPieceData() {
        //-- Check Type
        if (type > KING || type < PAWN) {
            return false;
        }
        //-- Check Color
        if (color != WHITE && color != BLACK) {
            return false;
        }
        return true;
    }
    /**
     * @brief Method to Check Piece Position
     * @return true 
     * @return false 
     */
    bool Piece::checkPiecePos() {
        
    }
    /**
     * @brief Chess Class Constructor
     */
    Chess::Chess(int &size) {        
        if (init()) {

        } else {
            exit(EXIT_FAILURE);
        }
    }
    /**
     * @brief Method to Initialize Chess Board
     * @param size Size of Chess Board
     * @return true
     * @return false 
     */
    bool Chess::init() {

    }
# endif // __CHESS_TOOLS