
void FUN_0217d21c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_20 [12];
  
  iVar1 = FUN_02178448();
  if ((iVar1 != 0) &&
     ((iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 7 ||
      (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 0xc)))) {
    if (param_2 == 0) {
      iVar1 = FUN_0217653c();
      if (iVar1 == -1) {
        FUN_0217d118(6,0xfffeabc4);
        return;
      }
      puVar7 = (undefined4 *)FUN_02176508();
      puVar8 = (undefined1 *)FUN_021764a8(iVar1);
      *puVar7 = param_1;
      iVar2 = FUN_02178448();
      *(char *)(iVar2 + 0xd) = *(char *)(iVar2 + 0xd) + '\x01';
      *puVar8 = (char)iVar1;
      *(undefined2 *)(puVar8 + 2) = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      iVar1 = FUN_02178448();
      iVar2 = FUN_02178448();
      puVar8[1] = *(undefined1 *)(iVar1 + (uint)*(byte *)(iVar2 + 0xd) + 0x2c8);
      FUN_0218a828(param_1,puVar8);
      iVar1 = FUN_02178448();
      if (*(int *)(iVar1 + 0x198) == 0xc) {
        FUN_0217a320(0);
        return;
      }
      FUN_0217a320(1);
    }
    else if (param_2 != 5) {
      if (param_2 != 6) {
        iVar1 = FUN_02178448();
        iVar2 = FUN_02178448();
        FUN_0217a93c(*(undefined4 *)(iVar1 + (*(byte *)(iVar2 + 0xd) + 1) * 4 + 0xf4));
        return;
      }
      iVar1 = FUN_02178448();
      *(char *)(iVar1 + 0xc) = *(char *)(iVar1 + 0xc) + '\x01';
      iVar1 = FUN_02178448();
      if (5 < *(byte *)(iVar1 + 0xc)) {
        iVar1 = FUN_02178448();
        *(undefined1 *)(iVar1 + 0xc) = 0;
        iVar1 = FUN_02178448();
        iVar2 = FUN_02178448();
        FUN_0217a93c(*(undefined4 *)(iVar1 + (uint)*(byte *)(iVar2 + 0x14) * 4 + 0xf4));
        return;
      }
      iVar1 = FUN_02178448();
      FUN_02052c44(auStack_20,0xc,&DAT_021a4b2c,*(undefined4 *)(iVar1 + 0x1f8));
      iVar1 = FUN_02178448();
      iVar2 = FUN_02178448();
      iVar3 = FUN_02178448();
      iVar4 = FUN_02178448();
      iVar5 = FUN_02178448();
      uVar6 = FUN_0218c40c(*(undefined4 *)(iVar2 + (uint)*(byte *)(iVar3 + 0x14) * 4 + 0x208),
                           *(undefined2 *)(iVar4 + (uint)*(byte *)(iVar5 + 0x14) * 2 + 0x288),0);
      iVar2 = FUN_02178448();
      iVar1 = FUN_0218a910(**(undefined4 **)(iVar1 + 4),0,uVar6,auStack_20,0xffffffff,5000,
                           *(undefined4 *)(iVar2 + 8),0);
      if (iVar1 == 1) {
        FUN_02178f5c();
        return;
      }
      if (iVar1 != 0) {
        iVar1 = FUN_02178448();
        iVar2 = FUN_02178448();
        FUN_0217a93c(*(undefined4 *)(iVar1 + (uint)*(byte *)(iVar2 + 0x14) * 4 + 0xf4));
        return;
      }
    }
  }
  return;
}

