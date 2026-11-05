
int FUN_0205f684(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined2 param_6)

{
  uint uVar1;
  int iVar2;
  char *local_20;
  int local_1c;
  
  uVar1 = FUN_0205ef9c(param_2,param_6);
  if (uVar1 == 0xffff) {
    uVar1 = (uint)*(ushort *)(*param_2 + 2);
  }
  local_20 = (char *)FUN_0205ef40(param_2,uVar1);
  local_1c = uVar1 * *(ushort *)(*(int *)(*param_2 + 8) + 2) + *(int *)(*param_2 + 8) + 8;
  (**(code **)(param_1 + 0x14))(param_1,param_2,param_3 + *local_20,param_4,param_5,&local_20);
  if ((short)param_2[2] == 0) {
    iVar2 = (int)local_20[2];
  }
  else {
    iVar2 = (int)*local_20 + (uint)(byte)local_20[1];
  }
  return iVar2;
}

