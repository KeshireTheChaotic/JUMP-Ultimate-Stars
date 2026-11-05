
undefined4 FUN_0216628c(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char local_18 [8];
  
  local_18[0] = DAT_0216aef0;
  local_18[1] = DAT_0216aef1;
  local_18[2] = DAT_0216aef2;
  local_18[3] = DAT_0216aef3;
  if (param_2 == 1) {
    puVar2 = DAT_0216e840;
  }
  else {
    puVar2 = DAT_0216e840 + 3;
  }
  if (*(char *)((int)puVar2 + 9) != '\0') {
    return 0;
  }
  if (param_2 == 1) {
    FUN_0206602c(&DAT_04001050,param_3,(int)local_18[param_1]);
  }
  else {
    FUN_0206602c(&DAT_04000050,param_3,(int)local_18[param_1]);
  }
  uVar1 = FUN_02167814(1,0x21661c5,puVar2,200);
  *puVar2 = uVar1;
  *(undefined2 *)(puVar2 + 1) = 0;
  *(char *)(puVar2 + 2) = (char)param_1;
  *(undefined2 *)((int)puVar2 + 6) = param_4;
  *(undefined1 *)((int)puVar2 + 9) = 1;
  return 1;
}

