
void FUN_02073c38(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0203b3e4();
  FUN_02073c74(*(undefined4 *)(iVar1 + 0x88),*(uint *)(param_1 + 4),~*(uint *)(param_1 + 4) & 0x3f);
  iVar1 = FUN_0203b3e4();
  FUN_02073c90(*(undefined4 *)(iVar1 + 0x88),0x10 - param_2,0x10);
  return;
}

