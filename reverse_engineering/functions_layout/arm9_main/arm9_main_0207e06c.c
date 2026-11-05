
int FUN_0207e06c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_38 [4];
  int local_34;
  undefined4 uStack_28;
  
  iVar4 = 0x7fffffff;
  iVar3 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x98); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = puVar1[2];
    psVar5 = *(short **)(iVar2 + 0x70);
    iVar7 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xc);
    iVar6 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x10) + ((int)psVar5[1] - (int)psVar5[3]) * 0x100;
    if ((((param_3 >> 8 <= iVar6 >> 8) &&
         (iVar7 + ((int)*psVar5 - (int)psVar5[2]) * 0x100 >> 8 <= param_2 >> 8)) &&
        (param_2 >> 8 <= iVar7 + ((int)*psVar5 + (int)psVar5[2]) * 0x100 >> 8)) && (iVar6 < iVar4))
    {
      iVar3 = iVar2;
      iVar4 = iVar6;
    }
  }
  uStack_28 = param_4;
  iVar2 = func_0x02162a80(*(undefined4 *)(param_1 + 0xf8));
  iVar6 = -1;
  if (iVar2 != -1) {
    func_0x0216293c(*(undefined4 *)(param_1 + 0xf8),iVar2,auStack_38);
    if ((iVar3 == 0) || (local_34 <= iVar4)) {
      iVar6 = iVar2;
    }
    else {
      iVar6 = (int)*(short *)(iVar3 + 0xa0);
    }
  }
  return iVar6;
}

