
undefined4 FUN_027ec200(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_027ec1ac();
  if ((*(ushort *)(iVar1 + 0x10) & 2) == 0) {
    uVar2 = 10;
  }
  else {
    uVar2 = 0x14;
  }
  return uVar2;
}

