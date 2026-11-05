
/* JUS-CLASS jus_Class_0209aa68::vfunc_35 [class-virtual] slot 35 of vtable 0209aa68 (own slot, not
   inherited) */

void jus_Class_0209aa68::vfunc_35(int param_1)

{
  undefined1 *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0x8c4)) {
  case 0:
    *(undefined4 *)(param_1 + 0x944) = 0x2066ce5;
    *(undefined4 *)(param_1 + 0x90c) = 0;
    *(undefined4 *)(param_1 + 0x914) = 0x4001010;
    *(undefined4 *)(param_1 + 0x948) = 0x2065f99;
    *(undefined1 **)(param_1 + 0x94c) = &LAB_0203e440;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x944) = 0x2066c5d;
    *(undefined4 *)(param_1 + 0x914) = 0x4001014;
    *(undefined4 *)(param_1 + 0x90c) = 0;
    *(undefined4 *)(param_1 + 0x948) = 0x2065f45;
    *(undefined1 **)(param_1 + 0x94c) = &LAB_0203e468;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x944) = 0x2066bd5;
    *(undefined4 *)(param_1 + 0x914) = 0x4001018;
    if (*(int *)(param_1 + 0x8e4) - 2U < 4) {
      puVar1 = &DAT_04001020;
    }
    else {
      puVar1 = (undefined1 *)0x0;
    }
    *(undefined1 **)(param_1 + 0x90c) = puVar1;
    *(undefined4 *)(param_1 + 0x948) = 0x2065e4d;
    *(undefined1 **)(param_1 + 0x94c) = &LAB_0203e490;
    break;
  case 3:
    *(undefined1 **)(param_1 + 0x944) = &LAB_02066b4c_1;
    *(undefined4 *)(param_1 + 0x914) = 0x400101c;
    if (*(int *)(param_1 + 0x8e4) - 2U < 4) {
      puVar1 = &DAT_04001030;
    }
    else {
      puVar1 = (undefined1 *)0x0;
    }
    *(undefined1 **)(param_1 + 0x90c) = puVar1;
    *(undefined4 *)(param_1 + 0x948) = 0x2065d55;
    *(undefined1 **)(param_1 + 0x94c) = &LAB_0203e4b8;
  }
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x90c);
  return;
}

