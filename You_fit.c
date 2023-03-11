#include <stdio.h>
#include <stdlib.h>

int age;
float cm, kg;
char sex;

void Female();
void Fteen();
void Ffit();
void DietChart();
void FitExe();
void Fovdiet();
void Fundiet();
void UnDiet();
void UnExc();
void Fyoung();
void Fwoman();
void FgetOld();
void Ffit_Old();
void Ffit_at_70();
void F_old();
void granny();
void Mgetold();
void Mmen();
void Myoung();
void MUnDiet();
void Movdiet();
void MaleExe();
void Mfit();
void Mteen();
void Male();

void main()
{
    int choice;
    printf("\n\n\n\t\t\t\t=========WELCOME TO YOU FIT=========\t\t\t\t");
    printf("\n\nGender: ");
    printf("\n\n1.M (Male)\n2.F (Female)\n");
    printf("\n\nEnter your gender: ");
    fflush(stdin);
    scanf("%c", &sex);
    printf("\n\n\nEnter your age: ");
    scanf("%d", &age);
    printf("Enter height(in cm): ");
    scanf("%f", &cm);
    printf("Enter weight(kg): ");
    scanf("%f", &kg);
    if (age >= 40)
    {
        printf("\n\nAs your age is more than 40 you should diagonasis your whole body and maintain your suger level\n");
    }
    if (sex == 'F')
        Female();
    else if (sex == 'M')
        Male();
    else
        printf("\nPlease enter your gender carefully and restart the app!!\n");
}

void Female() // for female diet check up
{
    if (age >= 15 && age <= 20)
        Fteen();
    else if (age >= 21 && age <= 30)
        Fyoung();
    else if (age >= 31 && age <= 40)
        Fwoman();
    else if (age >= 41 && age <= 50)
        FgetOld();
    else if (age >= 51 && age <= 70)
        F_old();
    else if (age > 70)
        granny();
    else
        printf("Invalid age!\nReopen the app and enter correct age\n\n");
}

void Fteen()
{
    int choice;
    char ch;

    if (cm >= 143.3 && cm <= 154.9)
    {
        if (kg >= 40 && kg <= 56.8)
        {
            printf("\n\nYou are FIT!");
            printf("\nDo You Want To Keep Your Fitness?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Ffit();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }

        else if (kg >= 59.1)
        {
            printf("\nYou are OVERWEIGHT!!\n");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Fovdiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg <= 40)
        {
            printf("\nYou are UNDERWEIGHT!!\n");
            Fundiet();
        }
        else
            printf("\nInvalid weight\n\n");
    }
    else if (cm > 152.4)
    {
        printf("\nHeight should be in range of: 143.3 to 154.9 cm\n");
        printf("\n\nBeing taller is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
    }
    else if (cm < 143.3)
    {
        printf("\nHeight should be in range of: 143.3 to 154.9 cm\n");
        printf("\n\nBeing shorter is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
        printf("\nEat fruits, vegetables and proteins.\nYou can do exercises under mentioned!!\n");
        printf("1.Swimming\n2.Cycling\n3.Breathe soap\n4.Yoga\n5.Basketball\n6.Jogging\n\n");
    }
    else
        printf("Invalid!\n\n");
}

void Ffit()
{
    int choice = 1;
    while (choice != 3)
    {

        printf("\n\n>Press 1 to Check out Fitness diet\n>Press 2 to check out Execises to keep fit\n>3.Press 3 to Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            DietChart();
            break;
        case 2:
            FitExe();
            break;
        case 3:
            printf("\n\nTHANK YOU TO USE 'YOU FIT App'.\nHOPE YOU WILL KEEP YOURSELF FIT\n\n");
            break;
        default:
            printf("Wrong choice!!\n\n");
            break;
        }
    }
}

void DietChart()
{
    printf("\n\n\n");
    printf("====================================================================================================================================");
    printf("\n                                    DIET CHART KEEPING FIT YOUR BODY                                    \n");
    printf("====================================================================================================================================");
    printf("\n\n\n");

    printf("\n\n             SUNDAY                      \n\n\n");
    printf("Breakfast (8:00-8:30AM) :\n");
    printf("\n\ti)Aloo Paratha (2) ");
    printf("\n\tii)Raita (1 cup)");
    printf("\n\nMid-Meal (11:00-11:30AM) :\n");
    printf("\n\ti)Fruit Salad (1 cup) ");
    printf("\n\tii)Tender Coconut Water (1 glass)");
    printf("\n\nLunch (2:00-2:30PM) :\n");
    printf("\n\ti)1 cup moong dal ");
    printf("\n\tii)2 chapatti");
    printf("\n\tiii)salad");
    printf("\n\nEvening (4:00-4:30PM) :\n");
    printf("\n\ti)Tea/ Coffee (1 cup) ");
    printf("\n\tii)Boiled Chana Chat (1 cup)");
    printf("\n\nDinner (8:00-8:30PM) :\n");
    printf("\n\ti)Chapati (2)");
    printf("\n\tii)Jeera Aloo (1 cup)");

    printf("\n\n\n             MONDAY                      \n\n\n");
    printf("Breakfast (8:00-8:30AM) :\n");
    printf("\n\ti)Chapati (2)");
    printf("\n\tii) Daal (1 cup)");
    printf("\n\nMid-Meal (11:00-11:30AM) :\n");
    printf("\n\ti)Fruit Salad (1 cup) ");
    printf("\n\tii)Tender Coconut Water (1 glass)");
    printf("\n\nLunch (2:00-2:30PM) :\n");
    printf("\n\ti)1 cup rajma");
    printf("\n\tii)1 cup gobhi aloo ");
    printf("\n\tiii)1 cup cucumber raita");
    printf("\n\tiv)1 cup rice ");
    printf("\n\tv)1 chapatti ");
    printf("\n\tvi)onion salad");
    printf("\n\nEvening (4:00-4:30PM) :\n");
    printf("\n\ti)Tea/ Coffee (1 cup)");
    printf("\n\tii) Aloo Chat (1 cup)");
    printf("\n\nDinner (8:00-8:30PM) :\n");
    printf("\n\ti)Chapati (2)");
    printf("\n\tii)Mix Veg");

    printf("\n\n\n             TUESDAY                      \n\n\n");
    printf("Breakfast (8:00-8:30AM) :\n");
    printf("\n\ti)Cheela (2) ");
    printf("\n\tii) Raita (1 cup)");
    printf("\n\nMid-Meal (11:00-11:30AM) :\n");
    printf("\n\ti)Fruit Salad (1 cup)");
    printf("\n\tii)Tender Coconut Water (1 glass)");
    printf("\n\nLunch (2:00-2:30PM) :\n");
    printf("\n\ti)1 cup chicken curry ");
    printf("\n\tii) 1 cup boiled rice");
    printf("\n\tiii)2 chapatti");
    printf("\n\tiv)salad");
    printf("\n\nEvening (4:00-4:30PM) :\n");
    printf("\n\ti)Tea/ Coffee (1 cup)");
    printf("\n\tii) Papri Chat (1 cup)");
    printf("\n\nDinner (8:00-8:30PM) :\n");
    printf("\n\ti)Chapati (2)");
    printf("\n\tii) Fish Curry (1 cup)");

    printf("\n\n               WEDNESDAY                      \n\n\n");
    printf("Breakfast (8:00-8:30AM) :\n");
    printf("\n\ti)Veg. Poha (1 cup) ");
    printf("\n\tii)Raita (1/2 cup)");
    printf("\n\nMid-Meal (11:00-11:30AM) :\n");
    printf("\n\ti)Fruit Salad (1 cup) ");
    printf("\n\tii)Tender Coconut Water (1 glass)");
    printf("\n\nLunch (2:00-2:30PM) :\n");
    printf("\n\ti)1 cup white chana");
    printf("\n\tii)palak paneer ");
    printf("\n\tiii)1 cup rice");
    printf("\n\tiv)1 chapatti");
    printf("\n\tv)salad");
    printf("\n\nEvening (4:00-4:30PM) :\n");
    printf("\n\ti)Tea/ Coffee (1 cup)");
    printf("\n\tii)Mur-mure Chat (1 cup)");
    printf("\n\nDinner (8:00-8:30PM) :\n");
    printf("\n\ti)Chapati (2)");
    printf("\n\tii)Mustard Greens (1 cup)");

    printf("\n\n\n             THURSDAY                      \n\n\n");
    printf("Breakfast (8:00-8:30AM) :\n");
    printf("\n\ti)Aloo Paratha (2)");
    printf("\n\tii) Raita (1 cup)");
    printf("\n\nMid-Meal (11:00-11:30AM) :\n");
    printf("\n\ti)Fruit Salad (1 cup)");
    printf("\n\tii)Tender Coconut Water (1 glass)");
    printf("\n\nLunch (2:00-2:30PM) :\n");
    printf("\n\ti)1 cup soy bean curry");
    printf("\n\tii)1 cup tinda vegetable");
    printf("\n\tiii)2 chapatti");
    printf("\n\tiv)salad");
    printf("\n\nEvening (4:00-4:30PM) :\n");
    printf("\n\ti)Tea/ Coffee (1 cup) ");
    printf("\n\tii)Boiled Chana Chat (1 cup)");
    printf("\n\nDinner (8:00-8:30PM) :\n");
    printf("\n\ti)Chapati (2) ");
    printf("\n\tii) Bottle Gourd Curry (1 cup)");

    printf("\n\n\n             FRIDAY                      \n\n\n");
    printf("Breakfast (8:00-8:30AM) :\n");
    printf("\n\ti)Chapati (2)");
    printf("\n\tii)Daal (1 cup)");
    printf("\n\nMid-Meal (11:00-11:30AM) :\n");
    printf("\n\ti)Fruit Salad (1 cup)");
    printf("\n\tii)Tender Coconut Water (1 glass)");
    printf("\n\nLunch (2:00-2:30PM) :\n");
    printf("\n\ti)1 cup fish curry ");
    printf("\n\tii)1 cup boiled rice");
    printf("\n\tiii)1 chapatti");
    printf("\n\tiv)1 cup ghia raita");
    printf("\n\tv) salad");
    printf("\n\nEvening (4:00-4:30PM) :\n");
    printf("\n\ti)Tea/ Coffee (1 cup)");
    printf("\n\tii) Aloo Chat (1 cup)");
    printf("\n\nDinner (8:00-8:30PM) :\n");
    printf("\n\ti)Chapati (2) ");
    printf("\n\tii)Matar n Mushroom Curry (1 cup)");

    printf("\n\n\n             SATURDAY                      \n\n\n");
    printf("Breakfast (8:00-8:30AM) :\n");
    printf("\n\ti)Veg Upma (1 cup) ");
    printf("\n\tii)Raita (1/2 cup)");
    printf("\n\nMid-Meal (11:00-11:30AM) :\n");
    printf("\n\ti)Fruit Salad (1 cup) ");
    printf("\n\tii)Tender Coconut Water (1 glass)");
    printf("\n\nLunch (2:00-2:30PM) :\n");
    printf("\n\ti)1 cup chicken curry ");
    printf("\n\tii)1 cup rice");
    printf("\n\tiii)salad");
    printf("\n\nEvening (4:00-4:30PM) :\n");
    printf("\n\ti)Tea/ Coffee (1 cup)");
    printf("\n\tii)Papri Chat (1 cup)");
    printf("\n\nDinner (8:00-8:30PM) :\n");
    printf("\n\ti)Chapati (2)");
    printf("\n\tii)Kofta (1 cup)");
}

void FitExe()
{
    printf("\n\n\n");
    printf("====================================================================================================================================");
    printf("\n                                    EXERCISES KEEPING FIT YOUR BODY                                  \n");
    printf("====================================================================================================================================");
    printf("\n\n\n");
    printf("1.STRECHING");
    printf("\n\ni)Standing Hamstring Stretch : ");
    printf("\n\n\ta)Stand tall with your feet hip-width apart, knees slightly bent, arms by your sides.");
    printf("\n\tb)Exhale as you bend forward at the hips, lowering your head toward the floor while keeping your head, neck, and shoulders relaxed.");
    printf("\n\tc)Wrap your arms around backs of your legs and hold anywhere from 45 seconds to 2 minutes.");
    printf("\n\td)Bend your knees and roll up when you're done.");

    printf("\n\nii).Lunge With Spinal Twist : ");
    printf("\n\n\ta)Start by standing with your feet together.");
    printf("\n\tb)Take a big step forward with your left foot, so that you are in a staggered stance.");
    printf("\n\tc)Bend your left knee and drop into a lunge, keeping your right leg straight behind you with your toes on the ground, so you feel a");
    printf("\n\t  stretch at the front of your right thigh.");
    printf("\n\td)Place your right hand on the floor and twist your upper body to the left as you extend your left arm toward the ceiling.");
    printf("\n\te)Hold for 30 seconds to 2 minutes.");
    printf("\n\tf)Repeat on the other side.");
    printf("\n\n2.SWIMING");
    printf("\n3.WALKING");
    printf("\n4.RUNNING");
    printf("\n5.CYCLING");
    printf("\n");
}

void Fovdiet() // for overweight
{
    int choice = 1;
    while (choice != 3)
    {
        printf("\n\n>Press 1 to check Healthy Diet\n>Press 2 to check Exercises\n>Press 3 to Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n\n\n");
            printf("=============================================================================");
            printf("\n                              HEALTHY DIET                                    \n");
            printf("=============================================================================");
            printf("\n\n\n");
            printf("1.Breakfast(8:00-8:30AM) :\n");
            printf("\n\ti)Honey & Lemon with Luke water");
            printf("\n\tii)3 egg whites");
            printf("\n\tii)1 toasted brown bread");
            printf("\n\tiv)1/2 cup low fat milk (no sugar)");
            printf("\n\n2.Mid-Meal (11:00-11:30AM) :\n");
            printf("\n\ti)1 cup papaya");
            printf("\n\n3.Lunch (2:00-2:30PM) :\n");
            printf("\n\ti)1 cup arhar dal");
            printf("\n\tii)1 chapatti");
            printf("\n\tiii)1/2 cup low fat curd");
            printf("\n\tiv)salad");
            printf("\n\n4.Evening (4:00-4:30PM)	:\n");
            printf("\n\ti)1 cup vegetable soup");
            printf("\n\n5.Dinner (8:00-8:30PM) :\n");
            printf("\n\ti)1 cup pumpkin");
            printf("\n\tii)1 chapatti");
            printf("\n\tiii)salad\n");
            break;
        case 2:
            printf("\n\n\n");
            printf("===============================================================================================");
            printf("\n                                 EXERCISES                                     \n");
            printf("===============================================================================================");
            printf("\n\n\n");
            printf("1. Squats :\n");
            printf("\n\ti)Stand with your feet a little wider than shoulder-width apart.");
            printf("\n\tii)For bodyweight squats, you can put your arms out in front of you for balance.");
            printf("\n\tiii)Engage your core, keep your back straight, spine tall, and lower yourself until your thighs are parallel with the floor.");
            printf("\n\tiv)Pause with your knees over, but not beyond, your toes.");
            printf("\n\tv)Exhale and stand back up.");
            printf("\n\tvi)Perform 10 to 15 repetitions");
            printf("\n\n2.Side lunges :\n");
            printf("\n\ti)Stand with your feet a little wider than hip-width apart. With your body tall, core engaged, and eyes facing forward, take a wide ");
            printf("\n\t step to the right and squat down.");
            printf("\n\tii)Lower your body until the right thigh is parallel to the floor.");
            printf("\n\tiii)Pause. Then push off with the left foot and return to center.");
            printf("\n\tiv)Perform this move, alternating sides, 12 to 16 times. ");
            printf("\n\n3.Wall sits :\n");
            printf("\n\ti)Stand up straight with your back pressed against a wall and your legs a few inches away from the wall.");
            printf("\n\tii)Slide down the wall until you are in a sitting position with your legs at a right angle and your hamstrings parallel to the floor.");
            printf("\n\tiii)Hold this position for 20 to 30 seconds. As you build your strength and fitness, try to work up to 1 minute.");
            printf("\n\tiv)Rise back up to the starting position.");
            printf("\n\n4.Step-ups with weights :\n");
            printf("\n\ti)Stand with your feet about hip-width apart in front of a knee-height bench or step, with a dumbbell in each hand.");
            printf("\n\tii)Step onto the bench with your right foot, and drive your left knee up while keeping the weights at your side.");
            printf("\n\tiii)Lower down your left leg, stepping backward off the bench.");
            printf("\n\tiv)Complete 10 to 15 reps, leading with your right leg, then switch and do the same number of reps leading with your left leg.");
            printf("\n\tv)Do 2 to 3 sets on each side.");
            printf("\n\n5.Side-lying leg raise :\n");
            printf("\n\ti)Lie on an exercise mat on your right side.");
            printf("\n\tii)Slowly raise up your top leg (left leg) as high as you can go. Keep your toes pointed forward.");
            printf("\n\tiii)Pause at the top, then lower your leg to the starting position. Make sure to keep your pelvis steady and your core engaged.");
            printf("\n\tiv)Repeat 10 times on each side. ");
            break;

        case 3:
            printf("\n\nTHANK YOU TO USE 'YOU FIT App'.\nHOPE YOU WILL KEEP YOURSELF FIT\n\n");
            break;
        default:
            printf("\n\nInvalid\n");
            break;
        }
    }
}

void Fundiet() // for underweight
{
    int choice = 1;
    while (choice != 3)
    {
        printf("\n\n\n>Press 1 to check Healthy Diet\n>Press 2 to check Exercises\n>Press 3 to Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n\n\n");
            printf("=============================================================================");
            printf("\n                               HEALTHY DIET                      \n");
            printf("=============================================================================");
            printf("\n\n\n");
            UnDiet();
            break;
        case 2:
            printf("\n\n\n");
            printf("===============================================================================");
            printf("\n                       EXERCISES FOR UNDERWEIGHT                          \n");
            printf("===============================================================================");
            UnExc();
            break;
        case 3:
            printf("\n\nTHANK YOU TO USE 'YOU FIT App'.\nHOPE YOU WILL KEEP YOURSELF FIT\n\n");
            break;
        default:
            printf("\n\nInvalid\n");
            break;
        }
    }
}

void UnExc()
{
    printf("\n\n\n");
    printf("\n1.Squats:");
    printf("\n\ni)Standing tall with your back straight and your feet slightly wider than hip-width apart is a good place to start. With your arms out in front of you, maintain a straight posture.\nii)Squeeze your glutes and move your butt backward rather than merely bending your knees.\niii)Start by inhaling, engaging your core, and bending your knees while pushing your butt out.\niv)Sit with your weight supported by your heels. Lower your hip joints till they are lower than your knees. Because that's exactly what a full squat is.\nv)Keep your hands in this posture for three seconds.\nvi)Exhale and begin to stand up, keeping your weight on your heels.\nvii)Repeat.");

    printf("\n\n2.PushUps:");
    printf("\n\ni)Lie down on the ground, face down.\nii)Hands should be somewhat broader than shoulders.\niii)Push yourself up slowly until your arms are completely extended.\niv)Lower yourself to the point when your chest is almost touching the floor.\nv)Push yourself back up after a little pause.");

    printf("\n\n3.Lunges:");
    printf("\n\ni)Flex your abdominal muscles while standing up straight.\nii)Make a big step forward.\niii)Lower your body until your shin is vertical and your thigh is parallel to the floor.\niv)Return to your original position by pressing back on your heel.\nv)Rep with the opposite leg.");

    printf("\n\n4.Crunches");
    printf("\n\ni)With your knees bent and your feet flat on the floor, lie flat on a carpet or your yoga mat.\nii)Inhale while crossing your arms over your chest and contracting your abs.\niii)Exhale and elevate your upper body while maintaining a relaxed head and neck.\niv)Return to the starting position by inhaling.\nv)Repeat.");
}

void Fyoung()
{
    char ch;
    if (cm >= 155.0 && cm <= 160.9)
    {
        if (kg >= 49 && kg <= 55.9)
        {
            printf("\n\nYou are FIT!!");
            printf("\nDo You Want To Keep Your Fitness?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Ffit();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg >= 56)
        {
            printf("\nYou are OVERWEIGHT!!\n");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Fovdiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg < 49)
        {
            printf("\nYou are UNDERWEIGHT!!\n");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Fundiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else
            printf("\nInvalid weight\n\n");
    }
    else if (cm > 160.9)
    {
        printf("\nHeight should be in range of: 155.0 to 169.0 cm\n");
        printf("\n\nBeing taller is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
    }
    else if (cm < 155.0)
    {
        printf("\nHeight should be in range of: 155.0 to 169.0 cm\n");
        printf("\n\nBeing shorter is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
        printf("\nEat fruits, vegetables and proteins.\nYou can do exercises under mentioned!!\n");
        printf("1.Swimming\n2.Cycling\n3.Breathe soap\n4.Yoga\n5.Basketball\n6.Jogging\n\n");
    }
    else
        printf("Invalid!\n\n");
}

void Fwoman()
{
    char ch;
    if (cm >= 161.0 && cm <= 170.9)
    {
        if (kg >= 54 && kg <= 65)
        {
            printf("\n\nYou are FIT!!");
            printf("\nDo You Want To Keep Your Fitness?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Ffit();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg >= 65.1)
        {
            printf("\nYou are OVERWEIGHT!!\n");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Fovdiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg < 54)
        {
            printf("\nYou are UNDERWIGHT!!\n");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Fundiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else
            printf("\nInvalid weight\n\n");
    }
    else if (cm > 170.9)
    {
        printf("\nHeight should be in range of: 155.0 to 169.0 cm\n");
        printf("\n\nBeing taller is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
    }
    else if (cm < 161.0)
    {
        printf("\nHeight should be in range of: 155.0 to 169.0 cm\n");
        printf("\n\nBeing shorter is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
        printf("\nEat fruits, vegetables and proteins.\nYou can do exercises under mentioned!!\n");
        printf("1.Swimming(optional)\n2.Cycling(optional)\n3.Breathe soap\n4.Yoga\n5.Jogging\n\n");
    }
    else
        printf("Invalid!\n\n");
}


void Male()
{
    if (age >= 15 && age <= 20)
        Mteen();
    else if (age >= 21 && age <= 30)
        Myoung();
    else if (age >= 31 && age <= 40)
        Mmen();
    else if (age >= 41 && age <= 50)
        Mgetold();
    else if (age >= 51 && age <= 70)
        F_old();
    else if (age > 70)
        granny();
    else
        printf("Invalid age!\nReopen the app and enter correct age\n\n");
}

void Mteen()
{
    char ch;
    if (cm >= 165 && cm <= 180)
    {
        if (kg >= 56 && kg <= 70)
        {
            printf("\n\nYou are FIT!");
            printf("\nDo You Want To Keep Your Fitness?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Mfit();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg > 70)
        {
            printf("\n\nYou are OVERWEIGHT!");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Movdiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg < 56)
        {
            printf("\n\nYou are UNDERWEIGHT!");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                MUnDiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
    }
    else if (cm > 180)
    {
        printf("\nHeight should be in range of: 143.3 to 154.9 cm\n");
        printf("\n\nBeing taller is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
    }
    else if (cm < 165)
    {
        printf("\nHeight should be in range of: 143.3 to 154.9 cm\n");
        printf("\n\nBeing shorter is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
        printf("\nEat fruits, vegetables and proteins.\nYou can do exercises under mentioned!!\n");
        printf("1.Swimming\n2.Cycling\n3.Breathe soap\n4.Yoga\n5.Basketball\n6.Jogging\n\n");
    }
    else
        printf("\nInvalid Height!\n\n");
}

void Mfit()
{
    int choice = 1;
    while (choice != 3)
    {
        printf("\n\n>Press 1 to Check out Fitness diet\n>Press 2 to check out Execises to keep fit\n>3.Press 3 to Exit\n\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n\n\n");
            printf("====================================================================================================================================");
            printf("\n                                    DIET CHART KEEPING FIT YOUR BODY                                    \n");
            printf("====================================================================================================================================");
            printf("\n\n\n");

            DietChart();
            break;
        case 2:
            MaleExe();
            break;
        case 3:
            printf("\n\nTHANK YOU TO USE 'YOU FIT App'.\nHOPE YOU WILL KEEP YOURSELF FIT\n\n");
            break;
        default:
            printf("Wrong choice!!\n\n");
        }
    }
}

void MaleExe()
{
    printf("\n\n\n");
    printf("====================================================================================================================================");
    printf("\n                                    EXERCISES KEEPING FIT YOUR BODY                                  \n");
    printf("====================================================================================================================================");
    printf("\n\n\n");
    printf("1.Pushups :\n");
    printf("\n\ti)Start in a plank position. Your core should be tight, shoulders pulled down and back, and your neck neutral.");
    printf("\n\tii)Bend your elbows and begin to lower your body down to the floor. When your chest grazes it, extend your elbows and return to the");
    printf("\n\tstart. Focus on keeping your elbows close to your body during the movement.");
    printf("\n\tiii)Complete 3 sets of as many reps as possible.");
    printf("\n\n2.Squats :\n");
    printf("\n\ti)Start by standing straight, with your feet slightly wider than shoulder-width apart, and your arms at your sides.");
    printf("\n\tii)Brace your core and, keeping your chest and chin up, push your hips back and bend your knees as if you're going to sit in a chair");
    printf("\n\tiii)Ensuring your knees don't bow inward or outward, drop down until your thighs are parallel to the ground, bringing your arms out");
    printf("\n\tin front of you in a comfortable position. Pause for 1 second, then extend your legs and return to the starting position.");
    printf("\n\tiv)Complete 3 sets of 20 reps.");
    printf("\n\n3.Standing overhead dumbbell presses :\n");
    printf("\n\ti)Pick a light set of dumbbells — we recommend 10 pounds to start — and start by standing, either with your feet shoulder-width");
    printf("\n\tapart or staggered. Move the weights overhead so your upper arms are parallel to the floor.");
    printf("\n\tii)Bracing your core, begin to push up until your arms are fully extended above your head. Keep your head and neck stationary.");
    printf("\n\tiii)After a brief pause, bend your elbows and lower the weight back down until your triceps muscle is parallel to the floor again.");
    printf("\n\tiv)Complete 3 sets of 12 reps.");
    printf("\n\n4.Single-leg deadlifts :\n");
    printf("\n\ti)Begin standing with a dumbbell in your right hand, and your knees slightly bent.");
    printf("\n\tii)Hinging at the hips, begin to kick your left leg straight back behind you, lowering the dumbbell down toward the ground.");
    printf("\n\tiii)When you reach a comfortable height with your left leg, slowly return to the starting position in a controlled motion, squeezing");
    printf("\n\tyour right glute. Ensure that your pelvis stays square to the ground during the movement.");
    printf("\n\tiv)Repeat 10 to 12 reps before moving the weight to your left hand and repeating the same steps on the left leg. It's suggested to ");
    printf("\n\tdo 3 sets of 10-12 reps per side.");
    printf("\n\n5.Burpees :\n");
    printf("\n\ti)Start by standing upright with your feet shoulder-width apart and your arms down at your sides.");
    printf("\n\tii)With your hands out in front of you, start to squat down. When your hands reach the ground, pop your legs straight back into a ");
    printf("\n\tpushup position.");
    printf("\n\tiii)Jump your feet up to your palms by hinging at the waist. Get your feet as close to your hands as you can get, landing them ");
    printf("\n\toutside your hands if necessary.");
    printf("\n\tiv)Stand up straight, bringing your arms above your head, and jump.");
    printf("\n\tv)This is one rep. Complete 3 sets of 10 reps as a beginner.");
}

void UnDiet()
{
    printf("\n\n\n\n");
    printf("\nBreakfast (8:00-8:30AM)  :	2 egg brown bread sandwich + green chutney + 1 cup milk + 3 cashews + 4 almonds + 2 walnuts");
    printf("\nMid-Meal (11:00-11:30AM) :	1 cup banana shake");
    printf("\nLunch (2:00-2:30PM)      :	1 cup arhar dal + 1 cup potato curry + 3 chapatti + 1/2 cup rice + 1/2 cup low fat curd + salad");
    printf("\nEvening (4:00-4:30PM)	 :      1 cup strawberry smoothie + 1 cup vegetable poha");
    printf("\nDinner (8:00-8:30PM)	 :      1.5 cup chicken curry + 3 chapatti + salad");
    printf("\n\nIf you are above 25 you should intake some protein powder with some luke warm water\n");
}

void Movdiet()
{
    int choice = 1;
    while (choice != 3)
    {
        printf("\n\n>1.Press 1 to get the dietchart to fit your body\n>2.Press 2 to get the exercises to fit your body\n>3.press 3 to exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\n\n\n");
            printf("=============================================================================");
            printf("\n                              HEALTHY DIET                                    \n");
            printf("=============================================================================");
            printf("\n\n\n");
            printf("1.Breakfast(8:00-8:30AM) :\n");
            printf("\n\ti)Honey & Lemon with Luke water");
            printf("\n\tii)3 egg whites");
            printf("\n\tii)1 toasted brown bread");
            printf("\n\tiv)1/2 cup low fat milk (no sugar)");
            printf("\n\n2.Mid-Meal (11:00-11:30AM) :\n");
            printf("\n\ti)1 cup papaya");
            printf("\n\n3.Lunch (2:00-2:30PM) :\n");
            printf("\n\ti)1 cup arhar dal");
            printf("\n\tii)1 chapatti");
            printf("\n\tiii)1/2 cup low fat curd");
            printf("\n\tiv)salad");
            printf("\n\n4.Evening (4:00-4:30PM)	:\n");
            printf("\n\ti)1 cup vegetable soup");
            printf("\n\n5.Dinner (8:00-8:30PM) :\n");
            printf("\n\ti)1 cup pumpkin");
            printf("\n\tii)1 chapatti");
            printf("\n\tiii)salad\n");
            break;
        case 2:
            printf("\n\n\n");
            printf("===============================================================================================");
            printf("\n                                 EXERCISES                                     \n");
            printf("===============================================================================================");
            printf("\n\n\n");
            printf("1. Squats :\n");
            printf("\n\ti)Stand with your feet a little wider than shoulder-width apart.");
            printf("\n\tii)For bodyweight squats, you can put your arms out in front of you for balance.");
            printf("\n\tiii)Engage your core, keep your back straight, spine tall, and lower yourself until your thighs are parallel with the floor.");
            printf("\n\tiv)Pause with your knees over, but not beyond, your toes.");
            printf("\n\tv)Exhale and stand back up.");
            printf("\n\tvi)Perform 10 to 15 repetitions");
            printf("\n\n2.Side lunges :\n");
            printf("\n\ti)Stand with your feet a little wider than hip-width apart. With your body tall, core engaged, and eyes facing forward, take a wide step to the right and squat down.");
            printf("\n\tii)Lower your body until the right thigh is parallel to the floor.");
            printf("\n\tiii)Pause. Then push off with the left foot and return to center.");
            printf("\n\tiv)Perform this move, alternating sides, 12 to 16 times. ");
            printf("\n\n3.Wall sits :\n");
            printf("\n\ti)Stand up straight with your back pressed against a wall and your legs a few inches away from the wall.");
            printf("\n\tii)Slide down the wall until you are in a sitting position with your legs at a right angle and your hamstrings parallel to the floor.");
            printf("\n\tiii)Hold this position for 20 to 30 seconds. As you build your strength and fitness, try to work up to 1 minute.");
            printf("\n\tiv)Rise back up to the starting position.");
            printf("\n\n4.Step-ups with weights :\n");
            printf("\n\ti)Stand with your feet about hip-width apart in front of a knee-height bench or step, with a dumbbell in each hand.");
            printf("\n\tii)Step onto the bench with your right foot, and drive your left knee up while keeping the weights at your side.");
            printf("\n\tiii)Lower down your left leg, stepping backward off the bench.");
            printf("\n\tiv)Complete 10 to 15 reps, leading with your right leg, then switch and do the same number of reps leading with your left leg.");
            printf("\n\tv)Do 2 to 3 sets on each side.");
            printf("\n\n5.Side-lying leg raise :\n");
            printf("\n\ti)Lie on an exercise mat on your right side.");
            printf("\n\tii)Slowly raise up your top leg (left leg) as high as you can go. Keep your toes pointed forward.");
            printf("\n\tiii)Pause at the top, then lower your leg to the starting position. Make sure to keep your pelvis steady and your core engaged.");
            printf("\n\tiv)Repeat 10 times on each side. ");
            printf("\n6.Walking");
            printf("\n7.Swimming");
            printf("\n8.Cycling");
            printf("\n9.Jogging");
            printf("\n10.Running");
            break;
        case 3:
            printf("\nThank You for using \"YOU FIT\" app.\nHope you are benifited");
            break;
        default:
            printf("\nWrong Choice!");
        }
    }
}

void MUnDiet()
{
    int choice = 1;
    while (choice != 3)
    {
        printf("\n\n>1.Press 1 to get the dietchart to fit your body\n>2.Press 2 to get the exercises to fit your body\n>3.press 3 to exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\n\n\n");
            printf("=============================================================================");
            printf("\n                              HEALTHY DIET                                    \n");
            printf("=============================================================================");
            printf("\n\n\n");
            UnDiet();
            break;

        case 2:
            printf("\n\n\n");
            printf("===============================================================================================");
            printf("\n                                 EXERCISES                                     \n");
            printf("===============================================================================================");
            printf("\n\n\n");

            printf("1.Pushups :\n");
            printf("\n\ti)Lie face down on the ground.");
            printf("\n\tii)Put your hands on the ground, palms flat, with your arms out at your sides and your hands shoulder-width apart.");
            printf("\n\tiii)Slowly push your body up until your arms are fully extended. Keep your back and legs straight so that your body makes a straight line.");
            printf("\n\tiv)Slowly lower yourself back down until your nose nearly touches the floor.");
            printf("\n\tv)Repeat as many times as you feel comfortable.");
            printf("\n\n2.Pullups :\n");
            printf("\n\ti)Grip the pullup bar with both hands. Your palms should face away from you. Keep your arms shoulder-width apart.");
            printf("\n\tii)Pull yourself up enough to hang off the bar so that your feet aren't touching the ground and your arms are straight.");
            printf("\n\tiii)Continue to pull yourself up until your chin is above the bar.");
            printf("\n\tiv)Slowly lower yourself down so that your arms are straight again.");
            printf("\n\tv)Repeat as many times as you want.");
            printf("\n\n3.Lunges :\n");
            printf("\n\ti)Stand up straight, flexing your abdominal muscles.");
            printf("\n\tii)Extend one leg like you're taking a step, then lean forward like you're kneeling until your knees are at 90-degree angles.");
            printf("\n\tiii)Push back on your heel to lift yourself back up to your initial position.");
            printf("\n\tiv)Repeat as many times as you feel comfortable on one leg.");
            printf("\n\tv)Repeat for the other leg.");
            printf("\n\n4.Squats :\n");
            printf("\n\ti)Stand up straight so that your feet are hips-width distance apart.");
            printf("\n\tii)Put your hands on your hips and flex your abdominal muscles.");
            printf("\n\tiii)Begin lowering yourself down using only your legs, as if you’re about to sit down, and get into a seated position until your thighs are parallel to the ground. Keep your upper body as still as possible.");
            printf("\n\tiv)Raise yourself back up to your original position.");
            printf("\n\tv)Repeat as many times as you want.");
            printf("\n\n5.Overhead press :\n");
            printf("\n\ti)Grip the bar with your hands about shoulder-width apart.");
            printf("\n\tii)Lift the bar up to just above the front of your chest, even with your shoulders.");
            printf("\n\tiii)Slowly lift the bar above you until your arms are straight. Keep your elbows locked and raise your shoulders like you're ");
            printf("\n\tshrugging.");
            printf("\n\tiv)Slowly lower the bar back to shoulder height.");
            printf("\n\tv)Repeat steps 3 and 4 as many times as comfortable.");
            break;
        case 3:
            printf("\nThank You for using \"YOU FIT\".\nHope you are benifited");
            break;
        default:
            printf("\nWrong Choice!");
        }
    }
}

void Myoung()
{
    char ch;
    if (cm >= 175 && cm <= 185)
    {
        if (kg >= 55 && kg <= 65)
        {
            printf("\n\nYou are FIT!!");
            printf("\nDo You Want To Keep Your Fitness?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Ffit();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg < 55)
        {
            printf("\nYou are UNDERWEIGHT!!\n");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Movdiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg > 65)
        {
            printf("\nYou are OVERWEIGHT!!\n");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                MUnDiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else
            printf("\nInvalid weight\n\n");
    }
    else if (cm > 185)
    {
        printf("\nHeight should be in range of: 175 to 185 cm\n");
        printf("\n\nBeing taller is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
    }
    else if (cm < 175)
    {
        printf("\nHeight should be in range of: 175 to 185 cm\n");
        printf("\n\nBeing shorter is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
        printf("\nEat fruits, vegetables and proteins.\nYou can do exercises under mentioned!!\n");
        printf("1.Swimming\n2.Cycling\n3.Breathe soap\n4.Yoga\n5.Basketball\n6.Jogging\n\n");
    }
    else
        printf("\nInvalid Height!\n\n");
}

void Mmen()
{
    char ch;
    if (cm >= 175 && cm <= 185)
    {
        if (kg >= 60 && kg <= 75)
        {
            printf("\n\nYou are FIT!!");
            printf("\nDo You Want To Keep Your Fitness?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Ffit();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg < 60)
        {
            printf("\nYou are UNDERWEIGHT!!\n");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                MUnDiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else if (kg > 75)
        {
            printf("\nYou are OVERWEIGHT!!\n");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &ch);
            if (ch == 'Y')
                Movdiet();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
        else
            printf("\nInvalid Weight");
    }
    else if (cm > 185)
    {
        printf("\nHeight should be in range of: 175 to 185 cm\n");
        printf("\n\nBeing taller is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
    }
    else if (cm < 175)
    {
        printf("\nHeight should be in range of: 175 to 185 cm\n");
        printf("\n\nBeing shorter is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
        printf("\nEat fruits, vegetables and proteins.\nYou can do exercises under mentioned!!\n");
        printf("1.Swimming\n2.Cycling\n3.Breathe soap\n4.Yoga\n5.Basketball\n6.Jogging\n\n");
    }
    else
        printf("\nInvalid Height!\n\n");
}

void Mgetold()
{
    char ch;

    if (kg >= 54 && kg <= 65)
    {
        printf("\n\nYou are FIT!!");
        printf("\nDo You Want To Keep Your Fitness?");
        printf("\n>Y(YES)\n>N(NO)");
        printf("\nEnter Your Choice: ");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'Y')
            Ffit_Old();
        else
            printf("THANK YOU FOR USING \"YOU FIT\"");
    }
    else if (kg > 65)
    {
        printf("\nYou are OVERWEIGHT!!\n");
        printf("\nDo You Want To  BE FIT?");
        printf("\n>Y(YES)\n>N(NO)");
        printf("\nEnter Your Choice: ");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'Y')
            Ffit_Old();
        else
            printf("THANK YOU FOR USING \"YOU FIT\"");
    }
    else if (kg < 54)
    {
        printf("\nYou are UNDERWIGHT!!\n");
        printf("\nDo You Want To  BE FIT?");
        printf("\n>Y(YES)\n>N(NO)");
        printf("\nEnter Your Choice: ");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'Y')
        {
            printf("\nHello");
            Ffit_Old();
        }
        else
            printf("THANK YOU FOR USING \"YOU FIT\"");
    }
    else
        printf("\n\nInvalid weight\n\n");
}

void Ffit_Old()
{
    int choice = 1;
    while (choice != 0)
    {
        printf("\n\n>Press 1 to to check healthy diet\n>Press 2 to check some yogas to keep yourself strong in your after 40's\n>Press 0 to exit\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n\n1> Try to avoid sugar as much as you can\n2> If you don't have gastric problem you can have 1 up of milk daily\n3> Eat vegis and fruits to make your body nutrisious\n4> If you are habituated to have tea or coffee as your first drink of morning, try to switch it with healthy juices\n5> Focus on your internal system and check up once in a year\n6> Take care of your bones and muscle strength, intake Calcium and Vitamin D, Iron by your food\n7> Try to have minimum carbs and fats and take protein as many grams as your body weight in kgs(if weight is 60kg, required amount of protein is 60gram)\n8>Stay happy from mentally. Don't let stress to come near you!\n");
            break;
        case 2:
            printf("\n\nYoga is best exercise after 40's..Check it out mentioned yogas down!!\n\n");
            printf("i)Head-to-Knee Pose (Janushirasana)\nii)Half Tortoise (Ardha-Kurmasana)\niii)Bow Pose (Dhanurasana)\niv)Spine-Twisting Pose (Ardha-Matsyendrasana)\nv)Camel Pose (Ustrasana)\nvi)Pranayam\nvii)Anulombilom\n");
            printf("\nStay healthy and fit!!!!\n\n");
            break;
        case 0:
            printf("\nThank you for using 'You Fit App'\n Hope you enjoyed\n\n");
            break;
        default:
            printf("\nWrong choice\n\n");
            break;
        }
    }
}

void Ffit_at_70()
{
    int choice = 1;
    while (choice != 0)
    {
        printf("\n\n>Press 1 to to check healthy diet\n>Press 2 to check some yogas to keep yourself strong in your after 50's\n>Press 0 to exit\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n\n1> Try to avoid sugar as much as you can\n2> If you don't have gastric problem you can have 1 up of milk daily\n3> Eat vegis and fruits to make your body nutrisious\n4> If you are habituated to have tea or coffee as your first drink of morning, try to switch it with healthy juices\n5> Focus on your internal system and check up once in a year\n6> Take care of your bones strength, intake Calcium and Vitamin D, Iron by your food\n7> Try to have minimum carbs and fats and take protein as many grams as your body weight in kgs(if weight is 60kg, required amount of protein is 60gram)\n8>Stay happy from mentally. Don't let stress and sadness to come near you!\n");
            break;
        case 2:
            printf("\n\nYoga is best exercise after 40's..Check it out mentioned yogas down!!\n\n");
            printf("i)Pranayam\nii)Anulombilom\niii)Walking\n\n");
            printf("\nStay healthy and fit!!!!\n\n");
            break;
        case 0:
            printf("\nThank you for using 'You Fit App'\n Hope you enjoyed\n\n");
            break;
        default:
            printf("\nWrong choice\n\n");
            break;
        }
    }
}

void F_old()
{
    int choice = 1;
    if (kg >= 50 && kg <= 65)
    {

        printf("\nYou are fit\n\n");
        while (choice != 0)
        {
            printf("\n\n>Press 1 to to check healthy diet\n>Press 2 to check some yogas to keep yourself strong in your after 50's\n>Press 0 to Exit\n\n");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("\n\n1> Try to avoid sugar as much as you can\n2> If you don't have gastric problem you can have 1 up of milk daily\n3> Eat vegis and fruits to make your body nutrisious\n4> If you are habituated to have tea or coffee as your first drink of morning, try to switch it with healthy juices\n5> Focus on your internal system and check up once in a year\n6> Take care of your bones and muscle strength, intake Calcium and Vitamin D, Iron by your food\n7> Try to have minimum carbs and fats and take protein as many grams as your body weight in kgs(if weight is 60kg, required amount of protein is 60gram)\n8>Stay happy from mentally. Don't let stress to come near you!\n");
                break;
            case 2:
                printf("\n\nYoga is best exercise after 50's..Check it out mentioned yogas down!!\n\n");
                printf("i)Pranayam\nii)Anulombilom\niii)Kapalvati\niv)Walking\n");
                printf("\nStay healthy and fit!!!!\n\n");
                break;

            case 0:
                printf("\n\nThank you for using 'You Fit App'\n Hope you enjoyed\n\n");
                break;
            default:
                printf("\nWrong choice\n\n");
                break;
            }
        }
    }
    else if (kg > 65)
    {
        while (choice != 0)
        {
            printf("\nYou are OVERWEIGHT\n\n");
            printf("\nDo You Want To  BE FIT?");
            printf("\n>Y(YES)\n>N(NO)");
            printf("\nEnter Your Choice: ");
            fflush(stdin);
            scanf("%c", &choice);
            if (choice == 'Y')
                Ffit_at_70();
            else
                printf("THANK YOU FOR USING \"YOU FIT\"");
        }
    }
    else
        printf("\nInvalid weight\n\n");
}

void granny()
{
    int ch = 1;
    if (kg <= 65)
    {
        printf("\nYou are FIT");
        while (ch != 3)
        {
            printf("\n\n>1.press 1 if you want to know diet chart\n2.>press 2 if you want to know exercises for keeping your body fit\n3.>press 3 to exit");
            printf("\nEnter your choice:");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf("\n\n1> Try to avoid sugar as much as you can\n2> If you don't have gastric problem you can have 1/2 cup of milk daily\n3> Eat vegis and fruits to make your body nutrisious\n4> If you are habituated to have tea or coffee as your first drink of morning, try to switch it with healthy juices\n5> Focus on your internal system and check up once in a year\n6> Take care of your bones and muscle strength, intake Calcium and Vitamin D, Iron by your food\n7> Try to have minimum carbs and fats and take protein as many grams as your body weight in kgs(if weight is 60kg, required amount of protein is 60gram)\n8>Stay happy from mentally. Don't let stress to come near you!\n");
                break;
            case 2:
                printf("\nAs you are over 70's,you need to do light exercises like WALKING,PRANAYAM,ANULOMBILOM,KOPALVATI\n");
                break;
            case 3:
                printf("\nThank You for using \"YOU FIT\".Hope you enjoyed.\n");
                break;
            default:
                printf("\nWrong Choice!");
            }
        }
    }
    else if (kg > 65)
    {
        int ch = 1;
        printf("\nYou are in OVERWEIGHT");
        while (ch != 3)
        {
            printf("\n\n>1.press 1 if you want to know diet chart\n2.>press 2 if you want to know exercises for keeping your body fit\n3.>press 3 to exit");
            printf("\nEnter your choice:");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf("\nDon't intake much fat and carbs\nYou need to focus intaking protein and other nutritian like vitamines and calcium\nIf you have deficiency of vitamines you can have vitamine pills under doctor's supervision\n");
                break;
            case 2:
                printf("\nYou need to walk atleast 2000 steps in a day and KAPALVATI,PRANAYAM,ANULOMBILOM will be benificial too\n");
                break;
            case 3:
                printf("\nThank You for using \"YOU FIT\".Hope you enjoyed.\n");
                break;
            default:
                printf("\nInvalid Choice!");
            }
        }
    }
}

void FgetOld()
{
    int choice;
    if (cm >= 161.0 && cm <= 170.9)
    {
        if (kg >= 54 && kg <= 65)
        {
            printf("\n\nYou are FIT!!");
            printf("\n>Press 1 to check fitness chart!");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            Ffit_Old();
        }
        else if (kg > 65)
        {
            printf("\nYou are OVERWEIGHT!!\n");
            printf(">Press 1 to be in shape\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            Ffit_Old();
        }
        else if (kg < 54)
        {
            printf("\nYou are UNDERWIGHT!!\n");
            printf(">Press 1 to be in shape\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            Ffit_Old();
        }
        else
            printf("\n\nInvalid weight\n\n");
    }
    else if (cm > 170.9)
    {
        printf("\nHeight should be in range of: 160.0 to 170.9 cm\n");
        printf("\n\nBeing taller is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        printf("\n\nAs your height is more than normal make sure to take balanced diet and exercises\n");
    }
    else if (cm < 161.0)
    {
        printf("\nHeight should be in range of: 160.0 to 170.9 cm\n");
        printf("\n\nBeing shorter is not bad but check once if you're not having any hormonal disorder or any other health dieseas.\n\n");
        Ffit_Old();
    }
    else
        printf("\n\nInvalid height!\n\n");
}
