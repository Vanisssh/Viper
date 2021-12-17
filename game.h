#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QVector>
#include <QPoint>
#include <QKeyEvent>

class Game: public QWidget
{
public:
    Game();

protected:
    void timerEvent(QTimerEvent*) override;
    void keyPressEvent(QKeyEvent *) override;
    void paintEvent(QPaintEvent *event) override;

private: 
    static const int DOT_WIDTH = 25;
    static const int DOT_HEIGHT = 25;

    static const int FIELD_WIDTH = 25;
    static const int FIELD_HEIGHT = 25;
    static const int DELAY = 150;

    void doDrawing();
    void localApple();
    void move();
    void check_field();
    void gameOver();
    void check_apple();
    QPoint m_apple;

    int m_timerId;

    enum Directions
    {
        left, right, up, down
    };

    Directions m_dir;

    bool m_inGame;
    QVector<QPoint> m_dots;

    void initGame();

};

#endif // GAME_H
