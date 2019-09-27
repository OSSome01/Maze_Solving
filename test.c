// A simple representation of graph using STL
#include <bits/stdc++.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include <stdio.h>
#include <math.h>
#include <time.h>

#include "SRA18.h"
#include "TUNING.h"
using namespace std;

char graph[20][20];
char dir[4] = {N,E,S,W};
int i=5,j=10;
graph[5][10]=S;
char prev_d = N;
int dist=1;

char direction()
{
    int i=0;

    if(turn==L)
    {
      prev_d = dir[i];
      i--;
      if(i==-1)
          i=3;
      return dir[i];
    }
    else if(turn==R)
    {
      prev_d = dir[i];
      i++;
      if(i==4)
        i=0;
      return dir[i];
    }
    else if(turn==U)
    {
      prev_d = dir[i];
      i=i+2;
      if(i==4)
        i=0;
      else if(i==5)
        i=1;
      return dir[i];
    }

}

int distance()
{

    int x = 29;
    dist = (encoder()/x);
    return dist;

}

int encoder()
{


}

void mark_path(int i, int j)
{

}

void plot_graph()
{
            if(node!=0)//node
            {
                if(node == 1)//right
                {
                    //distance();
                    if(prev_d==N)
                    {
                      j--;
                      graph[i][j]=distance;
                      j--;
                      if(graph[i][j]="X")
                          graph[i][j]="R";
                      else
                        find_untrav();
                    }
                    else if(prev_d==E)
                    {
                      i++;
                      graph[i][j]=distance;
                      i++;
                      if(graph[i][j]="X")
                          graph[i][j]="R";
                      else
                        find_untrav();
                    }
                    else if(prev_d==S)
                    {
                      j++;
                      graph[i][j]=distance;
                      j++;
                      if(graph[i][j]="X")
                          graph[i][j]="R";
                      else
                        find_untrav();
                    }
                    else if(prev_d==W)
                    {
                      i--;
                      graph[i][j]=distance;
                      i--;
                      if(graph[i][j]="X")
                          graph[i][j]="R";
                      else
                        find_untrav();
                    }
                }
                else if(node == 2)//left
                {
                    //distance();
                    if(prev_d==N)
                    {
                      j--;
                      graph[i][j]=distance;
                      j--;
                      if(graph[i][j]="X")
                          graph[i][j]="L";
                      else
                        find_untrav();
                    }
                    else if(prev_d==E)
                    {
                      i++;
                      graph[i][j]=distance;
                      i++;
                      if(graph[i][j]="X")
                          graph[i][j]="L";
                      else
                        find_untrav();
                    }
                    else if(prev_d==S)
                    {
                      j++;
                      graph[i][j]=distance;
                      j++;
                      if(graph[i][j]="X")
                          graph[i][j]="L";
                      else
                        find_untrav();
                    }
                    else if(prev_d==W)
                    {
                      i--;
                      graph[i][j]=distance;
                      i--;
                      if(graph[i][j]="X")
                          graph[i][j]="L";
                      else
                        find_untrav();
                    }
                }
                else if(node == 3)//T
                {
                    distance();
                    if(prev_d==N)
                    {
                        j--;
                        graph[i][j]=distance;
                        j--;
                        if(graph[i][j]="X")
                            graph[i][j]="T";
                        else
                          find_untrav();
                    }
                    else if(prev_d==E)
                    {
                      i++;
                      graph[i][j]=distance;
                      i++;
                      if(graph[i][j]="X")
                          graph[i][j]="T";
                      else
                        find_untrav();
                    }
                    else if(prev_d==S)
                    {
                      j++;
                      graph[i][j]=distance;
                      j++;
                      if(graph[i][j]="X")
                          graph[i][j]="T";
                      else
                        find_untrav();
                    }
                    else if(prev_d==W)
                    {
                      i--;
                      graph[i][j]=distance;
                      i--;
                      if(graph[i][j]="X")
                          graph[i][j]="T";
                      else
                        find_untrav();
                    }

                }
                else if(node == 4)//|-
                {
                    distance();
                    if(prev_d==N)
                    {
                      j--;
                      graph[i][j]=distance;
                      j--;
                      if(graph[i][j]="X")
                          graph[i][j]="|-";
                      else
                        find_untrav();
                    }
                    else if(prev_d==E)
                    {
                      i++;
                      graph[i][j]=distance;
                      i++;
                      if(graph[i][j]="X")
                          graph[i][j]="|-";
                      else
                        find_untrav();
                    }
                    else if(prev_d==S)
                    {
                      j++;
                      graph[i][j]=distance;
                      j++;
                      if(graph[i][j]="X")
                          graph[i][j]="|-";
                      else
                        find_untrav();
                    }
                    else if(prev_d==W)
                    {
                      i--;
                      graph[i][j]=distance;
                      i--;
                      if(graph[i][j]="X")
                          graph[i][j]="|-";
                      else
                        find_untrav();
                    }
                }
                else if(node == 5)// +
                {
                    distance();
                    if(prev_d==N)
                    {
                      j--;
                      graph[i][j]=distance;
                      j--;
                      if(graph[i][j]="X")
                          graph[i][j]="+";
                      else
                        find_untrav();
                    }
                    else if(prev_d==E)
                    {
                      i++;
                      graph[i][j]=distance;
                      i++;
                      if(graph[i][j]="X")
                          graph[i][j]="+";
                      else
                        find_untrav();
                    }
                    else if(prev_d==S)
                    {
                      j++;
                      graph[i][j]=distance;
                      j++;
                      if(graph[i][j]="X")
                          graph[i][j]="+";
                      else
                        find_untrav();
                    }
                    else if(prev_d==W)
                    {
                      i--;
                      graph[i][j]=distance;
                      i--;
                      if(graph[i][j]="X")
                          graph[i][j]="+";
                      else
                        find_untrav();
                    }
                }
                else if(node == 6)//-|
                {
                    distance();
                    if(prev_d==N)
                    {
                      j--;
                      graph[i][j]=distance;
                      j--;
                      if(graph[i][j]="X")
                          graph[i][j]="-|";
                      else
                        find_untrav();
                    }
                    else if(prev_d==E)
                    {
                      i++;
                      graph[i][j]=distance;
                      i++;
                      if(graph[i][j]="X")
                          graph[i][j]="-|";
                      else
                        find_untrav();
                    }
                    else if(prev_d==S)
                    {
                      j++;
                      graph[i][j]=distance;
                      j++;
                      if(graph[i][j]="X")
                          graph[i][j]="-|";
                      else
                        find_untrav();
                    }
                    else if(prev_d==W)
                    {
                      i--;
                      graph[i][j]=distance;
                      i--;
                      if(graph[i][j]="X")
                          graph[i][j]="-|";
                      else
                        find_untrav();
                    }
                }
                else if(node ==7)//dead end
                {
                    distance();
                    if(prev_d==N)
                    {
                      j--;
                      graph[i][j]=distance;
                      j--;
                      if(graph[i][j]="X")
                          graph[i][j]="U";
                      else
                        find_untrav();
                    }
                    else if(prev_d==E)
                    {
                      i++;
                      graph[i][j]=distance;
                      i++;
                      if(graph[i][j]="X")
                          graph[i][j]="U";
                      else
                        find_untrav();
                    }
                    else if(prev_d==S)
                    {
                      j++;
                      graph[i][j]=distance;
                      j++;
                      if(graph[i][j]="X")
                          graph[i][j]="U";
                      else
                        find_untrav();
                    }
                    else if(prev_d==W)
                    {
                      i--;
                      graph[i][j]=distance;
                      i--;
                      if(graph[i][j]="X")
                          graph[i][j]="U";
                      else
                        find_untrav();
                    }
            }


}

void turning()
{
    bot_stop(MCPWM_UNIT_0, MCPWM_TIMER_0);
   vTaskDelay( 1000 / portTICK_PERIOD_MS );
    int m=1;
     if(node==2)
    	{
            //vTaskDelay( 1000 / portTICK_PERIOD_MS );
            while(m==1)
             {
        	    read_sensors();
        	    calc_sensor_values();
                extra_sensors();
                bot_spot_right(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                if (sensor_value[1]>=150 && sensor_value[2]>=150 && x==1)
                    m=0;
             }
        }
     else if(node==1)
    	{
            //vTaskDelay( 1000 / portTICK_PERIOD_MS );
            while(m==1)
             {
        	    read_sensors();
        	    calc_sensor_values();
                   extra_sensors();
              //  bot_spot_right(MCPWM_UNIT_0, MCPWM_TIMER_0, 70, 0);
                bot_spot_left(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                if (sensor_value[1]>=150 && sensor_value[2]>=150 && y==1)
                    m=0;
             }
        }
     else if(node==7)
        {
            //vTaskDelay( 1000 / portTICK_PERIOD_MS );
            while(m==1)
            {
                 read_sensors();
        	    calc_sensor_values();
               // bot_spot_right(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                bot_spot_left(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                if (sensor_value[1]>=150 && sensor_value[2]>=150)
                    m=0;
            }
        }
     else if (node==3)
        {
           // vTaskDelay( 1000 / portTICK_PERIOD_MS );
            while(m==1)
            {
                read_sensors();
                calc_sensor_values();
                extra_sensors();
               bot_spot_right(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                //bot_spot_left(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                if (sensor_value[1]>=150 && sensor_value[2]>=150 && x==1 && y==1)
                    m=0;
            }
        }
     else if (node==6)
        {
           // vTaskDelay( 1000 / portTICK_PERIOD_MS );
            while(m==1)
            {
                 read_sensors();
                calc_sensor_values();
                extra_sensors();

               bot_spot_right(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                //bot_spot_left(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                if (sensor_value[1]>=150 && sensor_value[2]>=150 && x==1)
                    m=0;
            }
        }
     else if (node==5)
        {
           // vTaskDelay( 1000 / portTICK_PERIOD_MS );
            while(m==1)
            {
                 read_sensors();
                calc_sensor_values();
                extra_sensors();

               bot_spot_right(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                //bot_spot_left(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                if (sensor_value[1]>=150 && sensor_value[2]>=150 && x==1 && y==1 && z==0)
                    m=0;
            }
        }
     else if (node==4)
        {
           // vTaskDelay( 1000 / portTICK_PERIOD_MS );
            while(m==1)
            {
                 read_sensors();
                calc_sensor_values();
                extra_sensors();

               bot_forward(MCPWM_UNIT_0,MCPWM_TIMER_0,left_pwm,right_pwm);
                //bot_spot_left(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                if (sensor_value[1]>=150 && sensor_value[2]>=150 && x==0 && y==1 && z==0)
                    m=0;
            }
        }

     /*else
     {
        while(m==1)
        {
            read_sensors();
            calc_sensor_values();
            extra_sensors();
            bot_spot_left(MCPWM_UNIT_0, MCPWM_TIMER_0, 68, 68);
                if (sensor_value[1]>=150 && sensor_value[2]>=150 && z==)
                    m=0;



        }
     }*/

}
void turn_detection()
{



     if(sensor_value[1]>60&&sensor_value[2]>60&&sensor_value[3]>60&&y==0&&x==1&&z==1)
    {
        node =1;//right turn
        //turning();
    }
     else if(sensor_value[1]>60&&sensor_value[2]>60&&sensor_value[0]>60&&y==1&&x==0&&z==1)
    {
        node =2;//left turn
        //turning();
    } else if(sensor_value[0]>60 && sensor_value[1]>60&&sensor_value[2]>60&&sensor_value[3]>60&&y==0&&x==0&&z==1)
    {
        node =3;//T turn
        //turning();
    } else if(sensor_value[1]>60&&sensor_value[2]>60&&sensor_value[3]>60&&y==0&&x==1&&z==0)
    {
        node =4;// |- turn
        //turning();
    }
    else if(sensor_value[1]>60&&sensor_value[2]>60&&sensor_value[3]>60&&sensor_value[0]>60&&x==0&&y==0&&z==1)
    {
        node =6;// -| turn
        //turning();
    }
    else if(sensor_value[1]<60&&sensor_value[2]<60&&sensor_value[3]<60&&sensor_value[0]<60)
    {
        node =7;// dead end
        //turning();
    }
     else if(sensor_value[1]>60&&sensor_value[2]>60&&sensor_value[0]>60&&sensor_value[3]>60&&x==0&&y==0&&z==0)
    {
        node =5;// + formation
        //turning();
    }


}

void line_follow(void *arg)
{

//vTaskDelay(100/ portTICK_RATE_MS);
    while(1)
    {
        read_sensors();
        calc_sensor_values();
        calc_error();
        calc_correction();
        bot_forward(MCPWM_UNIT_0, MCPWM_TIMER_0, left_pwm, right_pwm);
        distance();
        turn_detection();
        plot_graph();
        turning();
        //distance();
        //blink();
        printf("%d",n);
        printf("\n");


       for(int i=0;i<4;i++)
        {
            printf("%f \t",sensor_value[i]);
        }
        printf("\n");
        //printf("Left Pwm: %f\t",left_pwm );
        //printf("Right Pwm: %f\n",right_pwm );
//printf("Error: %f\t",error );
//printf("correction: %f ",correction);

    }
}

void app_main()
{
    mcpwm_initialize();
    nvs_flash_init();
    xTaskCreate(&line_follow,"line following",100000,NULL,1,NULL);
}
