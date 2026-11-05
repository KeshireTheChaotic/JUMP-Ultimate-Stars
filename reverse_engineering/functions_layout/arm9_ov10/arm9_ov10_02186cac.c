
undefined4 FUN_02186cac(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *param_1;
  if (((*(int *)(iVar4 + 0x204) != -1) && (iVar2 = FUN_02001c9c(), iVar2 != 0)) &&
     (iVar2 = FUN_02001ad4(*(undefined4 *)(iVar4 + 0x204),0,0), iVar2 != -1)) {
    puVar3 = (undefined4 *)FUN_02186c14(param_1);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_02001b80(iVar2);
    }
    else {
      *puVar3 = 0x68;
      puVar3[2] = iVar2;
      FUN_02001e30(iVar2,0);
      FUN_02186d4c(puVar3[2]);
    }
  }
  piVar5 = *(int **)(iVar4 + 0x434);
  while (piVar1 = piVar5, piVar1 != (int *)0x0) {
    piVar5 = (int *)piVar1[0xf];
    iVar4 = FUN_02186ea8(param_1,piVar1);
    if (((*piVar1 == 0x6a) || (iVar4 != 0)) || (iVar4 = FUN_0200199c(0), piVar1[4] < iVar4)) {
      FUN_02186db0(param_1,piVar1);
    }
  }
  return 0;
}

