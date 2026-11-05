
void FUN_0215ec14(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_18 [2];
  
  *(char *)(param_1 + param_2 + 0x14) = (char)param_3;
  iVar2 = FUN_0214f704();
  if (param_2 == iVar2) {
    iVar2 = *(int *)(param_1 + param_2 * 4 + 4);
    FUN_02023894(*(undefined4 *)(iVar2 + 4),param_2 + 3U | 0x820000,0);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
    local_18[0] = (param_3 * 0x2f + 0xb) * 0x1000;
    local_18[1] = 0xe8000;
    FUN_0214e1b8(iVar2,local_18 + 1,local_18);
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x1c);
    *(char *)(param_1 + 0x1c) = cVar1 + '\x01';
    *(char *)(param_1 + cVar1 + 0x18) = (char)param_2;
  }
  return;
}

