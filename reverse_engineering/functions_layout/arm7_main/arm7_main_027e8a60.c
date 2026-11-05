
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_027e8a60(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_10 [8];
  
                    /* JUS-TAG hw={"POWCNT":1,"EXMEMCNT":1} io=["04000206","04000304"] */
  _DAT_0380fff4 = *param_1;
  MIi_CpuClearFast(0,_DAT_0380fff4,0x694);
  uVar1 = FUN_037fbddc();
  *(undefined4 *)(_DAT_0380fff4 + 0x314) = uVar1;
  *(int *)(_DAT_0380fff4 + 0x30c) = param_1[6];
  *(uint *)(_DAT_0380fff4 + 0x310) = (uint)param_1[7] >> 1;
  if (*(int *)(_DAT_0380fff4 + 0x310) == 0) {
    *(undefined4 *)(_DAT_0380fff4 + 0x310) = 0xffffffff;
  }
  FUN_027e8dcc(param_1 + 8);
  FUN_027f5730();
  _DAT_04000304 = _DAT_04000304 | 2;
  _DAT_04000206 = 0x30;
  *(undefined4 *)(_DAT_0380fff4 + 0x68c) = 3;
  FUN_027f5874(0x3c,2,_DAT_0380fff4 + 0x692);
  FUN_027f5874(0x3e,2,_DAT_0380fff4 + 0x690);
  *(int *)(_DAT_0380fff4 + 0x308) = param_1[4];
  *(int *)(_DAT_0380fff4 + 0x304) = param_1[5];
  uVar1 = FUN_03807acc(param_1[0xc],0x1c);
  FUN_027eb434(param_1[0xb],uVar1);
  FUN_027e8c90();
  FUN_027ec97c();
  FUN_027eca08();
  FUN_027ebd78();
  FUN_027e97c0();
  iVar2 = FUN_027f5914(auStack_10);
  if (iVar2 == 0) {
    FUN_027e9a54();
    FUN_027eb930();
    FUN_027ea3d4();
    FUN_027e9a1c();
    FUN_027e981c();
    FUN_027eb7ac();
    FUN_027eb4b4();
    FUN_027e99ac();
    FUN_027ea908();
    FUN_027ea468();
  }
  else {
    *(ushort *)(_DAT_0380fff4 + 0x33e) = *(ushort *)(_DAT_0380fff4 + 0x33e) | 0x80;
  }
  FUN_037fc66c(_DAT_0380fff4 + 0x18,FUN_037f8538,0,param_1[1],param_1[2],param_1[3]);
  FUN_037fc42c(_DAT_0380fff4 + 0x18);
  FUN_027ebb04();
  return *(undefined2 *)(_DAT_0380fff4 + 0x33e);
}

