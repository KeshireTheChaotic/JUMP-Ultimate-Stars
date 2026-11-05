
/* JUS-CLASS jus_Class_0209ab18::vfunc_35 [class-virtual] slot 35 of vtable 0209ab18 (own slot, not
   inherited) */

void jus_Class_0209ab18::vfunc_35(int param_1)

{
  undefined1 *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0x8c4)) {
  case 0:
    *(undefined4 *)(param_1 + 0x944) = 0x2066d29;
    *(undefined1 **)(param_1 + 0x914) = &DAT_04000010;
    *(undefined4 *)(param_1 + 0x90c) = 0;
    *(undefined4 *)(param_1 + 0x948) = 0x2065fb9;
    *(undefined1 **)(param_1 + 0x94c) = &LAB_0203da40;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x944) = 0x2066ca1;
    *(undefined4 *)(param_1 + 0x914) = 0x4000014;
    *(undefined4 *)(param_1 + 0x90c) = 0;
    *(undefined4 *)(param_1 + 0x948) = 0x2065f65;
    *(undefined1 **)(param_1 + 0x94c) = &LAB_0203da68;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x944) = 0x2066c19;
    *(undefined4 *)(param_1 + 0x914) = 0x4000018;
    if (*(int *)(param_1 + 0x8e4) - 2U < 4) {
      puVar1 = &DAT_04000020;
    }
    else {
      puVar1 = (undefined1 *)0x0;
    }
    *(undefined1 **)(param_1 + 0x90c) = puVar1;
    *(code **)(param_1 + 0x948) = FUN_02065eb8;
    *(undefined1 **)(param_1 + 0x94c) = &LAB_0203da90;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x944) = 0x2066b91;
    *(undefined4 *)(param_1 + 0x914) = 0x400001c;
    if (*(int *)(param_1 + 0x8e4) - 2U < 4) {
      puVar1 = &DAT_04000030;
    }
    else {
      puVar1 = (undefined1 *)0x0;
    }
    *(undefined1 **)(param_1 + 0x90c) = puVar1;
    *(code **)(param_1 + 0x948) = FUN_02065dc0;
    *(undefined1 **)(param_1 + 0x94c) = &LAB_0203dab8;
  }
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x90c);
  *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_1 + 0x914);
  return;
}

