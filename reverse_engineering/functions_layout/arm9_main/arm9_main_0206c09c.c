
undefined4 FUN_0206c09c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (*(code *)param_1[4])
                    (param_1,(int)*(short *)(param_2 + 4),(int)*(short *)(param_2 + 6),
                     (code *)param_1[4],param_4);
  if (iVar1 == 0) {
    return 1;
  }
  FUN_02028384(*(undefined4 *)(*param_1 + 4),0x206be85);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)((int)param_1 + 0x6a) = *(undefined2 *)(param_2 + 6);
  return 0;
}

