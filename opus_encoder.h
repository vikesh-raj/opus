
#include <opus.h>

int
bridge_encoder_set_dtx(OpusEncoder *st, opus_int32 use_dtx)
{
	return opus_encoder_ctl(st, OPUS_SET_DTX(use_dtx));
}

int
bridge_encoder_get_dtx(OpusEncoder *st, opus_int32 *dtx)
{
	return opus_encoder_ctl(st, OPUS_GET_DTX(dtx));
}

int
bridge_encoder_get_in_dtx(OpusEncoder *st, opus_int32 *in_dtx)
{
	return opus_encoder_ctl(st, OPUS_GET_IN_DTX(in_dtx));
}

int
bridge_encoder_get_sample_rate(OpusEncoder *st, opus_int32 *sample_rate)
{
	return opus_encoder_ctl(st, OPUS_GET_SAMPLE_RATE(sample_rate));
}

int
bridge_encoder_set_bitrate(OpusEncoder *st, opus_int32 bitrate)
{
	return opus_encoder_ctl(st, OPUS_SET_BITRATE(bitrate));
}

int
bridge_encoder_get_bitrate(OpusEncoder *st, opus_int32 *bitrate)
{
	return opus_encoder_ctl(st, OPUS_GET_BITRATE(bitrate));
}

int
bridge_encoder_set_complexity(OpusEncoder *st, opus_int32 complexity)
{
	return opus_encoder_ctl(st, OPUS_SET_COMPLEXITY(complexity));
}

int
bridge_encoder_get_complexity(OpusEncoder *st, opus_int32 *complexity)
{
	return opus_encoder_ctl(st, OPUS_GET_COMPLEXITY(complexity));
}

int
bridge_encoder_set_max_bandwidth(OpusEncoder *st, opus_int32 max_bw)
{
	return opus_encoder_ctl(st, OPUS_SET_MAX_BANDWIDTH(max_bw));
}

int
bridge_encoder_get_max_bandwidth(OpusEncoder *st, opus_int32 *max_bw)
{
	return opus_encoder_ctl(st, OPUS_GET_MAX_BANDWIDTH(max_bw));
}

int
bridge_encoder_set_inband_fec(OpusEncoder *st, opus_int32 fec)
{
	return opus_encoder_ctl(st, OPUS_SET_INBAND_FEC(fec));
}

int
bridge_encoder_get_inband_fec(OpusEncoder *st, opus_int32 *fec)
{
	return opus_encoder_ctl(st, OPUS_GET_INBAND_FEC(fec));
}

int
bridge_encoder_set_packet_loss_perc(OpusEncoder *st, opus_int32 loss_perc)
{
	return opus_encoder_ctl(st, OPUS_SET_PACKET_LOSS_PERC(loss_perc));
}

int
bridge_encoder_get_packet_loss_perc(OpusEncoder *st, opus_int32 *loss_perc)
{
	return opus_encoder_ctl(st, OPUS_GET_PACKET_LOSS_PERC(loss_perc));
}

int
bridge_encoder_reset_state(OpusEncoder *st)
{
	return opus_encoder_ctl(st, OPUS_RESET_STATE);
}
