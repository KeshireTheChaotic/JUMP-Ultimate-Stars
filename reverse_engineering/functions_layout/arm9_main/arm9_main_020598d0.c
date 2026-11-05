
void FUN_020598d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined1 param_8,
                 undefined1 param_9,int param_10,undefined1 param_11)

{
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_22;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  MIi_CpuClear32(0,&local_38,0x1c);
  local_1e = param_11;
  local_22 = param_7;
  local_20 = param_8;
  local_1f = param_9;
  local_38 = 0x1e03;
  if (param_10 != 0) {
    local_38 = 0x1e07;
  }
  local_34 = param_6;
  local_32 = param_6;
  if (param_10 != 0) {
    local_30 = param_6;
  }
  FUN_02059974(param_1,param_2,param_3,param_4,param_5,&local_38);
  return;
}

