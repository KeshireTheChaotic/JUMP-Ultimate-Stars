
void FUN_0207aa20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
                    /* JUS-TAG source_file_inferred="BattleProp.cpp" */
  iVar3 = 7;
  iVar2 = param_1;
  do {
    bVar4 = *(char *)(iVar2 + 0xf) < '\0';
    iVar1 = 0;
    if (bVar4) {
      iVar1 = ((int)*(char *)(iVar2 + 0xf) << 0x1a) >> 0x1a;
    }
    if (bVar4 && iVar1 != -1) {
      FUN_02079e40(param_1,iVar2,param_2);
    }
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 0x10;
  } while (0 < iVar3);
  return;
}

