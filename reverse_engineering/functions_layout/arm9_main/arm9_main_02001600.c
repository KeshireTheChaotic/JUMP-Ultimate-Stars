
int FUN_02001600(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_1 == (int *)0x0) {
    FUN_02002068(0x2092f94,0x2092f88,0,0x61);
    return 0;
  }
  iVar4 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      iVar1 = FUN_0200131c(*(undefined4 *)(*param_1 + iVar2));
      iVar3 = iVar3 + iVar1;
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  return iVar3;
}

