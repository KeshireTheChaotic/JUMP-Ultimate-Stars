
void FUN_020207dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((DAT_020a0e00 & 1) == 0) {
    PropBindInstance_02095200::PropBindInstance_02095200
              (&DAT_020a18c4,DAT_020a0ed4,param_3,param_4,param_4);
    FUN_0200f2b0(&DAT_020a18c4,PropBindInstance_02095200::~PropBindInstance_02095200,&DAT_020a11a0);
    DAT_020a0e00 = DAT_020a0e00 | 1;
  }
  DAT_020a0d50 = &DAT_020a18c4;
  return;
}

