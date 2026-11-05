
void FUN_02152c7c(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  if ((param_2 & 0x20) != 0) {
    iVar3 = FUN_02152934(*(undefined4 *)(iVar2 + 0x180));
    if (iVar3 == 0) {
      *param_3 = *(int *)(iVar2 + 0x180);
      return;
    }
    func_0x021b65bc();
    FUN_02153ad0(iVar2,(int)*(char *)(iVar2 + 0x439));
    FUN_02153174(iVar2);
    FUN_0207342c(0x78,1);
    return;
  }
  if (((param_2 & 2) != 0) && ((*param_3 == 0 || (iVar1 = FUN_02152d80(), iVar1 != 0)))) {
    *param_3 = *(int *)(iVar2 + 0x180);
    return;
  }
  if (*(char *)(iVar2 + 0x439) != '\x03') {
    return;
  }
  if (((iVar3 >> 0x10 & 0xffffU) == 1) && ((param_2 & 1) != 0)) {
    *param_3 = 0;
  }
  if ((param_2 & 0x100) != 0) {
    FUN_02154108(iVar2,0,0xffffffff);
    *param_3 = 0;
  }
  if ((param_2 & 0x200) == 0) {
    return;
  }
  FUN_02154108(iVar2,0,1);
  *param_3 = 0;
  return;
}

