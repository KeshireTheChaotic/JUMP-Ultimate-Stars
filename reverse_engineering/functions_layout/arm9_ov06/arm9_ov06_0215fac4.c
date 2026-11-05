
void FUN_0215fac4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0215fb88(*param_1);
  param_1[3] = 0;
  param_1[2] = 0;
  cVar1 = *(char *)(param_2 + 10);
  for (iVar4 = 0; iVar4 < cVar1; iVar4 = iVar4 + 1) {
    iVar2 = (int)*(char *)(param_2 + iVar4 + 0xb);
    iVar3 = *(int *)(DAT_0214bd80 + 0x50);
    (*(code *)(&PTR_FUN_02172210)[*(byte *)(iVar3 + iVar2 * 4)])
              (param_1,iVar3 + iVar2 * 4,(&PTR_FUN_02172210)[*(byte *)(iVar3 + iVar2 * 4)],iVar3,
               param_4);
  }
  FUN_0215fc78(*param_1,5);
  return;
}

