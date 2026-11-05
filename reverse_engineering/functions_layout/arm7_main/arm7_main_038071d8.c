
undefined4 FUN_038071d8(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  
  uVar3 = 1;
  uVar1 = FUN_037fbddc();
  FUN_037fbef4(uVar1);
  iVar2 = 0;
  do {
    if (0x4d < iVar2) {
LAB_03807264:
      thunk_FUN_037fbed4(uVar1);
      FUN_037fbe74(uVar1);
      return uVar3;
    }
    uVar4 = 0xff7b;
    if ((iVar2 != 0x4c) && (uVar4 = 0xffff, iVar2 == 0x4d)) {
      uVar4 = 0xfffc;
    }
    if ((uVar4 & *(ushort *)(param_1 + iVar2 * 2)) != *(ushort *)(iVar2 * 2 + 0x8000004)) {
      uVar3 = 0;
      goto LAB_03807264;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

