
void FUN_0217405c(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x1014);
  if (param_1 != 0) {
    FUN_0217386c(param_1,param_1 + 0x1a34,0x20);
    FUN_02173d90(param_1,param_1 + 0x1a04);
    FUN_02173d90(param_1,param_1 + 0x19f4);
    if (*(int *)(param_1 + 0x19c8) != 0) {
      (*pcVar1)(s_FREE_http_>lowrecvbuf_021a3b3c,*(int *)(param_1 + 0x19c8),0);
      *(undefined4 *)(param_1 + 0x19c8) = 0;
    }
    if (*(int *)(param_1 + 0x19cc) != 0) {
      (*pcVar1)(s_FREE_http_>lowsendbuf_021a3b54,*(int *)(param_1 + 0x19cc),0);
      *(undefined4 *)(param_1 + 0x19cc) = 0;
    }
    FUN_020517fc(param_1,0,0x1c10);
  }
  return;
}

