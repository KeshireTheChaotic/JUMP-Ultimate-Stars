
void FUN_02153120(void)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  JQuizCommonWork::JQuizCommonWork_Quiz_Shuffle_Core();
  FUN_0214f5dc();
  FUN_0214f754();
  FUN_0214f93c();
  FUN_0214f718(0);
  FUN_0214f740(1);
  local_18 = 3;
  local_14 = 0;
  local_10 = FUN_0214f540();
  local_10 = local_10 + 1;
  local_c = FUN_0214f540();
  local_c = local_c + 0x41;
  local_8 = 0;
  JQuizStartSinglePlay::JQuizStartCore_Add(&local_18);
  return;
}

