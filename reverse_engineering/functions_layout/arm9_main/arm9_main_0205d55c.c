
int FUN_0205d55c(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iStack_2c;
  
  puVar1 = (undefined4 *)FUN_0205c5b0();
  if (puVar1 == (undefined4 *)0x0) {
    return 4;
  }
  if ((param_2 & 2) == 0) {
    iVar2 = FUN_0205c3bc(*puVar1);
  }
  else {
    iVar2 = FUN_0205d2b8(*puVar1,param_3,param_4);
    if (iVar2 == 0) {
      return 8;
    }
  }
  iVar5 = 0;
  do {
    if (*(short *)((int)puVar1 + iVar5 * 2 + 4) != -1) {
      puVar3 = (uint *)FUN_0205c54c();
      if (puVar3 == (uint *)0x0) {
        return 5;
      }
      iVar4 = FUN_0205d4c0(*(undefined2 *)((int)puVar1 + iVar5 * 2 + 4),param_2,param_3,param_4);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (((*puVar3 & 0x1000000) != 0) && ((param_2 & 4) != 0)) {
        iVar4 = FUN_0205ce08(iStack_2c,iVar2,iVar5,*puVar3 & 0xffffff);
        if (iVar4 == 0) {
          return 9;
        }
      }
      if ((iVar2 != 0) && (iStack_2c != 0)) {
        FUN_02057910(iVar2,iVar5);
      }
    }
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      if (param_5 != (int *)0x0) {
        *param_5 = iVar2;
      }
      return 0;
    }
  } while( true );
}

