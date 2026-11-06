
undefined4 FUN_037fec7c(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_037fd7e4();
  if ((iVar1 == 0) || (iVar1 = FUN_037fdc58(), iVar1 == 0)) {
    uVar2 = 0;
  }
  else if (DAT_03808518 == 0) {
    FUN_037fdc48(&DAT_0380851c);
    lVar3 = OS_GetTick();
    FUN_037fda28(&DAT_0380851c,(int)(lVar3 + 0x82e),(int)((ulonglong)(lVar3 + 0x82e) >> 0x20),0x82e,
                 0,FUN_037fec3c,0);
    uVar2 = 1;
    DAT_03808518 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

