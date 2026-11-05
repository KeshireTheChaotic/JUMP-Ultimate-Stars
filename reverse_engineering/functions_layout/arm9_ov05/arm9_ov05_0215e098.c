
void FUN_0215e098(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  if (param_2 == 1) {
    func_0x021bd730(*puVar1,iVar2,0,param_4,param_4);
    return;
  }
  if (param_2 != 4) {
    return;
  }
  if (iVar2 == 0x7d) {
    FUN_02028384(*(undefined4 *)(puVar1[2] + 4),FUN_0215deec);
    FUN_0207342c(0x78,1);
    return;
  }
  func_0x021b65cc();
  return;
}

