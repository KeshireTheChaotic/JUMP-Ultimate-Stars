
void FUN_02153070(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((param_2 & 0x20) != 0) {
    func_0x021b65bc();
    FUN_02153ad0(iVar1,(int)*(char *)(iVar1 + 0x439));
    FUN_02153174(iVar1);
    FUN_0207342c(0x78,1);
    return;
  }
  if (*(char *)(iVar1 + 0x439) != '\x03') {
    return;
  }
  if ((param_2 & 0x100) != 0) {
    FUN_02154108(iVar1,0,1,param_4,param_4);
  }
  if ((param_2 & 0x200) == 0) {
    return;
  }
  FUN_02154108(iVar1,0,0xffffffff);
  return;
}

