
bool FUN_02199e68(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  
  if ((DAT_0214cd00 & 1) != 0) {
    return true;
  }
  uVar1 = FUN_0201a418(DAT_020a0dd8,0,0x700,in_r3,in_r3);
  iVar2 = FUN_0206950c();
  iVar3 = FUN_0201a9ec(uVar1);
  if (iVar3 == 0) {
    FUN_0201a958(uVar1,1);
  }
  DAT_0214cd00 = DAT_0214cd00 | 1;
  FUN_02199f94();
  return iVar2 != 3;
}

