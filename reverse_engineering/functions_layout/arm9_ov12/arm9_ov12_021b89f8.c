
void FUN_021b89f8(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  FUN_021ac9b0(param_1 + 0x28);
  if (((char)param_1[0x2e] == '\0') && (param_3 == 0)) {
    (**(code **)(*param_1 + 300))(param_1,0,300,*(code **)(*param_1 + 300),param_4);
    return;
  }
  (**(code **)(*param_1 + 300))(param_1,1);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  return;
}

