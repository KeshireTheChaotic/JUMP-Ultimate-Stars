
bool FUN_0215c690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x11d) & 1) == 0;
  if (bVar1) {
    FUN_0215b460(param_1);
    FUN_0207ce7c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x10000000);
    FUN_0215911c(param_1,1);
    FUN_0215911c(param_1,0);
    FUN_02157494(param_1,0x18,FUN_0215c704,0,0x10,param_4);
  }
  return bVar1;
}

