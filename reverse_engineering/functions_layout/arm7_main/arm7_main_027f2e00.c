
undefined4 FUN_027f2e00(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint uVar6;
  
  FUN_027ec244(*(undefined2 *)(param_1 + 2));
  FUN_027e9364();
  uVar2 = FUN_027e93b0(param_1 + 0x33);
  uVar6 = 0;
  uVar3 = uVar2;
  puVar5 = (ushort *)(param_1 + 0x34);
  while( true ) {
    if (uVar2 >> 1 <= uVar6) {
      if (((uVar2 & 1) == 0) || (uVar1 = FUN_027e9334(), (*puVar5 & 0xff) == (uVar1 & 0xff))) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      return uVar4;
    }
    uVar3 = FUN_027e9334(uVar3);
    if (*puVar5 != uVar3) break;
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 1;
  }
  return 0;
}

