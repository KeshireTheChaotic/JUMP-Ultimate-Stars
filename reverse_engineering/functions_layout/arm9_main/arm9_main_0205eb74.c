
undefined4 FUN_0205eb74(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_2 + param_1 & 0xfffffffc;
  uVar1 = param_1 + 3U & 0xfffffffc;
  if ((uVar3 < uVar1) || (uVar3 - uVar1 < 0x30)) {
    return 0;
  }
  uVar2 = FUN_0205ecd0();
  return uVar2;
}

