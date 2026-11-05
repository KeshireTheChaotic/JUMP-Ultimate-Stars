
int FUN_02068cf8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_020673ec(0x10);
  iVar2 = FUN_02067394();
  iVar3 = func_0x02198ccc();
  if ((iVar2 == 2) && (iVar3 == 3)) {
    iVar2 = FUN_02068b6c(uVar1);
  }
  else if (iVar2 == 6) {
    iVar2 = FUN_02068788(uVar1,6);
  }
  else if (((iVar3 == 3) || (iVar3 == 6)) && (iVar2 = FUN_02068788(uVar1,iVar2), iVar2 != 7)) {
    if (iVar2 == 3) {
      iVar2 = FUN_02068ae8(uVar1);
    }
    else if (iVar2 == 4) {
      iVar2 = FUN_020689b0(uVar1);
    }
    else if (iVar2 == 5) {
      iVar2 = FUN_020688b8(uVar1);
    }
  }
  return iVar2;
}

