
int FUN_0205d120(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_20 [4];
  
  puVar5 = (undefined4 *)auStack_20;
  iVar3 = FUN_0205c3bc();
  if (iVar3 == 0) {
    iVar3 = FUN_0205c3e4(param_1,&DAT_020ae054,0x3c,0);
    if (iVar3 != 0x3c) {
      return 0;
    }
    if (param_2 == 0) {
      puVar5 = (undefined4 *)(auStack_20 + 4);
    }
    iVar1 = DAT_020ae08c * 4;
    iVar2 = DAT_020ae08c * 8;
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 != 0) {
      FUN_0205c6dc(iVar2);
    }
    *puVar5 = param_1;
    iVar3 = FUN_0205cc44(param_2,iVar2 + 0x5c,FUN_0205cffc);
    if (iVar3 == 0) {
      return 0;
    }
    iVar4 = FUN_0205c3e4(param_1,iVar3,iVar1 + 0x3c,0);
    if (iVar4 != iVar1 + 0x3c) {
      return 0;
    }
    FUN_02051890(iVar3 + 0x3c,iVar3 + 0x3c + *(int *)(iVar3 + 0x38) * 4,iVar1);
    FUN_020517fc(iVar3 + 0x3c,0,iVar1);
    DC_StoreRange(iVar3,iVar2 + 0x3c);
    if (param_3 != 0) {
      FUN_0205c3a0(param_1,iVar3);
    }
  }
  return iVar3;
}

