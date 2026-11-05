
void FUN_02181830(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_020012d8(*(undefined4 *)(param_1 + 4));
  uVar2 = *puVar1;
  (**(code **)(param_1 + 0x488))(param_1,2,uVar2,*(undefined4 *)(param_1 + 0x494));
  FUN_02001150(*(undefined4 *)(param_1 + 4),param_2);
  FUN_0218186c(param_1,uVar2);
  return;
}

