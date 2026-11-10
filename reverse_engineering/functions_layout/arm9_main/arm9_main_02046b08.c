
/* JUS-CLASS jus_HwTexPltt_Part_020944cc::vfunc_22 [class-virtual] slot 22 of vtable 020944cc (own
   slot, not inherited) */

void jus_HwTexPltt_Part_020944cc::vfunc_22(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint extraout_r1;
  uint uVar1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  (**(code **)(*DAT_020a1704 + 0xa0))();
  (**(code **)(*DAT_020a1710 + 0xa0))();
  FUN_02035fc0();
  uVar2 = 0;
  uVar1 = extraout_r1;
  do {
    bVar3 = (&DAT_020a1720)[uVar2] != 0;
    if (bVar3) {
      param_3 = (&DAT_020a1700)[uVar2];
      uVar1 = *(uint *)(param_3 + 0x95c);
    }
    bVar4 = uVar1 != 0;
    if (bVar3 && bVar4) {
      uVar1 = (uint)*(byte *)(param_3 + 0x956);
    }
    if ((bVar3 && bVar4) && uVar1 != 0) {
      param_3 = 0x20;
      FUN_02045570((&DAT_020a1720)[uVar2],&DAT_020a9a84);
      uVar1 = extraout_r1_00;
    }
    bVar3 = (&DAT_020a1730)[uVar2] != 0;
    if (bVar3) {
      param_3 = (int)(&DAT_020a1710)[uVar2];
      uVar1 = *(uint *)(param_3 + 0x95c);
    }
    bVar4 = uVar1 != 0;
    if (bVar3 && bVar4) {
      uVar1 = (uint)*(byte *)(param_3 + 0x956);
    }
    if ((bVar3 && bVar4) && uVar1 != 0) {
      param_3 = 0x20;
      FUN_02045570((&DAT_020a1730)[uVar2],&DAT_020a9a84);
      uVar1 = extraout_r1_01;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

