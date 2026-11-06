
undefined4 FUN_0218c114(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  ushort local_28 [2];
  undefined2 local_24;
  ushort uStack_22;
  int local_20;
  int local_1c [2];
  
  FUN_02001ecc();
  if (param_4 == 0) {
    param_4 = 0x10000;
  }
  if (param_3 == 0) {
    param_3 = 0x10000;
  }
  iVar1 = FUN_0218c310(param_2,local_1c,local_28);
  if (iVar1 == 0) {
    return 4;
  }
  piVar2 = (int *)FUN_0217583c(0x44);
  if (piVar2 == (int *)0x0) {
    return 1;
  }
  FUN_02002488(piVar2,0,0x44);
  *piVar2 = -1;
  piVar2[0xf] = param_4;
  piVar2[0xe] = param_3;
  piVar2[9] = param_5;
  iVar1 = FUN_0200169c(4,0x20,2,0x218c2c9,0x218c2ad,0);
  piVar2[3] = iVar1;
  if (piVar2[3] == 0) {
    FUN_02175814(piVar2);
    return 1;
  }
  iVar1 = FUN_02001368(4,4,0x218c2a1);
  piVar2[4] = iVar1;
  if (piVar2[4] == 0) {
    FUN_02001650(piVar2[3]);
    FUN_02175814(piVar2);
    return 1;
  }
  iVar1 = FUN_02001b94(2,2,0);
  *piVar2 = iVar1;
  if (*piVar2 == -1) {
    FUN_02001650(piVar2[3]);
    FUN_02001320(piVar2[4]);
    FUN_02175814(piVar2);
    return 3;
  }
  local_20 = local_1c[0];
  uStack_22 = local_28[0] >> 8 | local_28[0] << 8;
  local_24 = 0x200;
  iVar1 = FUN_02001b34(*piVar2,&local_24,8);
  if (iVar1 == -1) {
    FUN_02001b80(*piVar2);
    FUN_02001650(piVar2[3]);
    FUN_02001320(piVar2[4]);
    FUN_02175814(piVar2);
    return 3;
  }
  local_1c[1] = 8;
  FUN_02001a08(*piVar2,&local_24,local_1c + 1);
  piVar2[1] = local_20;
  *(ushort *)(piVar2 + 2) = uStack_22 >> 8 | uStack_22 << 8;
  *param_1 = piVar2;
  return 0;
}

