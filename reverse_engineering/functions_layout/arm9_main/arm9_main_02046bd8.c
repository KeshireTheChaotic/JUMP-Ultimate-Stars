
/* JUS-CLASS jus_HwTexPltt_Part_020944cc::vfunc_23 [class-virtual] slot 23 of vtable 020944cc (own
   slot, not inherited) */

void jus_HwTexPltt_Part_020944cc::vfunc_23(void)

{
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar1;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint uVar2;
  int *piVar3;
  
  (**(code **)(*DAT_020a0e4c + 0xc))();
  (**(code **)(*DAT_020a104c + 0xc))();
  (**(code **)(*DAT_020a1024 + 0xc))();
  (**(code **)(*DAT_020a0fd0 + 0xc))();
  uVar2 = 0;
  uVar1 = extraout_r1;
  do {
    if ((int *)(&DAT_020a1720)[uVar2] != (int *)0x0) {
      (**(code **)(*(int *)(&DAT_020a1720)[uVar2] + 0xc))();
      uVar1 = extraout_r1_00;
    }
    if ((int *)(&DAT_020a1730)[uVar2] != (int *)0x0) {
      (**(code **)(*(int *)(&DAT_020a1730)[uVar2] + 0xc))();
      uVar1 = extraout_r1_01;
    }
    if (uVar2 != 0) {
      if (*(int *)((&DAT_020a1700)[uVar2] + 0x8dc) == 4) {
        piVar3 = DAT_020a0e14;
      }
      else {
        piVar3 = (int *)(&DAT_020a1740)[uVar2];
      }
      if (piVar3 != (int *)0x0) {
        uVar1 = piVar3[3];
      }
      if (piVar3 != (int *)0x0 && uVar1 != 0) {
        if (*(int *)((&DAT_020a1700)[uVar2] + 0x950) == -1) {
          if ((uint)piVar3[4] < uVar1) {
            (**(code **)(*piVar3 + 0xc))();
          }
        }
        else {
          FUN_02066920();
          (**(code **)(*piVar3 + 0xc))();
          FUN_020668e0();
        }
        (**(code **)(*piVar3 + 8))();
        uVar1 = extraout_r1_02;
      }
    }
    if (*(int *)((&DAT_020a1710)[uVar2] + 0x8dc) == 4) {
      piVar3 = DAT_020a0fa8;
    }
    else {
      piVar3 = (int *)(&DAT_020a16f0)[uVar2];
    }
    if (piVar3 != (int *)0x0) {
      uVar1 = piVar3[3];
    }
    if (piVar3 != (int *)0x0 && uVar1 != 0) {
      if (*(int *)((&DAT_020a1710)[uVar2] + 0x950) == -1) {
        if ((uint)piVar3[4] < uVar1) {
          (**(code **)(*piVar3 + 0xc))();
        }
      }
      else {
        FUN_020668c8();
        (**(code **)(*piVar3 + 0xc))();
        FUN_02066898();
      }
      (**(code **)(*piVar3 + 8))();
      uVar1 = extraout_r1_03;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

