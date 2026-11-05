
void FUN_021beee0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = 0x22c0000;
  *param_1 = *(undefined4 *)(param_2 + 0x24);
  param_1[1] = *(undefined4 *)(param_2 + 0x34);
  puVar1 = param_1 + 3;
  pcVar2 = FUN_021d01f4;
  iVar3 = 0;
  do {
    FUN_021bedb4(param_2,pcVar2,puVar1,&local_18);
    puVar1 = puVar1 + 4;
    pcVar2 = pcVar2 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  FUN_02051890(param_2 + 0x160,param_1 + 0xf,0x88);
  return;
}

