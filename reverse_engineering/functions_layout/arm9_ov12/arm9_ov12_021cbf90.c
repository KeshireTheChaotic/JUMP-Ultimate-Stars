
void FUN_021cbf90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* JUS-TAG source_file_inferred="WiFiVoiceChat.cpp" */
  if (*param_1 == 0) {
    uStack_c = param_4;
    iVar1 = FUN_02026f94();
    *param_1 = iVar1;
    iVar1 = FUN_02031124();
    FUN_02027db0(*(undefined4 *)(*param_1 + 4),*(undefined4 *)(iVar1 + 4));
    local_10 = 0x2000;
    (**(code **)(**(int **)(*param_1 + 4) + 0xa0))(*(int **)(*param_1 + 4),&local_10);
    FUN_02028384(*(undefined4 *)(*param_1 + 4),0x21cc261);
    (**(code **)(**(int **)(*param_1 + 4) + 0x24))(*(int **)(*param_1 + 4),param_1);
  }
  return;
}

