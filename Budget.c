#include <stdio.h>

int main() {
    int blast_rifles, visual_sensors, auditory_sensors, arms, legs;
    float total_cost;
    float cost_blast_rifle = 350.34;
    float cost_visual_sensor = 230.90;
    float cost_auditory_sensor = 190.55;
    float cost_arms = 125.30;
    float cost_legs = 180.90;
    scanf("%d", &blast_rifles);
    scanf("%d", &visual_sensors);
    scanf("%d", &auditory_sensors);
    scanf("%d", &arms);
    scanf("%d", &legs);
    total_cost = (blast_rifles * cost_blast_rifle) + 
                 (visual_sensors * cost_visual_sensor) + 
                 (auditory_sensors * cost_auditory_sensor) + 
                 (arms * cost_arms) + 
                 (legs * cost_legs);
    if (total_cost <= 15000) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}