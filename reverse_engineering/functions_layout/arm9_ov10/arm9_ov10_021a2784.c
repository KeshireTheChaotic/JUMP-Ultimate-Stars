
int FUN_021a2784(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_34 [4];
  int local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  iVar3 = 0;
  uStack_1c = param_4;
  iVar2 = FUN_02071050();
  FUN_020710f8(param_1,auStack_34,&local_30,auStack_2c,auStack_28,auStack_24,auStack_20);
  if (local_30 == 0xff) {
    iVar4 = 1;
  }
  else {
    iVar4 = iVar3;
    do {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      if (*(short *)(param_2 + iVar1) != *(short *)(iVar2 + iVar1)) {
        iVar4 = 1;
      }
    } while (iVar3 < 10);
  }
  if (iVar4 != 0) {
    FUN_0207102c(param_1,param_2);
  }
  if (local_30 == 0xff) {
    FUN_0207106c(param_1,0,0,0,0,0,0);
  }
  return iVar4;
}

