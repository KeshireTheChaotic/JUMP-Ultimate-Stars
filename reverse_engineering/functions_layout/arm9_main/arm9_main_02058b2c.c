
int FUN_02058b2c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02058060();
  iVar2 = FUN_02058044();
  if (iVar2 != 0) {
    return iVar2;
  }
  if (param_1 == 0) {
    return 6;
  }
  DC_InvalidateRange(*(undefined4 *)(iVar1 + 4),0x7c0);
  FUN_020517c4(*(undefined4 *)(iVar1 + 4),param_1,0x7c0);
  return 0;
}

