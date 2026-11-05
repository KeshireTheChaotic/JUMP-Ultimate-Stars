
int FUN_0214dfa8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2d);
  if (uVar2 < 0x2b) {
    return uVar2 + 0xa00fff;
  }
  uVar3 = uVar2 - 0x2b;
  if (uVar3 == 0xe) {
    return 0xa01029;
  }
  if (9 < uVar3) {
    return 0xa01032;
  }
  if (4 < uVar3) {
    return 0xa01037;
  }
  if (uVar2 == 0x2b) {
    iVar1 = 0xa01029;
  }
  else {
    iVar1 = uVar2 + 0xa01007;
  }
  return iVar1;
}

