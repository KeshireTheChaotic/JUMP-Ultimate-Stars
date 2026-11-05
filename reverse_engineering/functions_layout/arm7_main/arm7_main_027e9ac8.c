
void FUN_027e9ac8(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint local_20 [2];
  
  iVar3 = 100;
  uVar1 = 0;
  local_20[0] = 0;
  uVar2 = 0;
  do {
    FUN_027f5874(iVar3,1,local_20);
    if (uVar2 == 1) {
      local_20[0] = local_20[0] & 0x80;
    }
    uVar1 = FUN_027e92bc(local_20[0] & 0xff,uVar1);
    iVar3 = iVar3 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x69);
  return;
}

