#ifndef QTHTTPHEADER_H
#define QTHTTPHEADER_H

class QByteArray;

class QtHttpHeader
{
public:
	static const QByteArray & Server;
	static const QByteArray & Date;
	static const QByteArray & Host;
	static const QByteArray & Accept;
	static const QByteArray & ContentType;
	static const QByteArray & ContentLength;
	static const QByteArray & Connection;
	static const QByteArray & Cookie;
	static const QByteArray & UserAgent;
	static const QByteArray & AcceptCharset;
	static const QByteArray & AcceptEncoding;
	static const QByteArray & AcceptLanguage;
	static const QByteArray & Authorization;
	static const QByteArray & CacheControl;
	static const QByteArray & ContentMD5;
	static const QByteArray & ProxyAuthorization;
	static const QByteArray & Range;
	static const QByteArray & ContentEncoding;
	static const QByteArray & ContentLanguage;
	static const QByteArray & ContentLocation;
	static const QByteArray & ContentRange;
	static const QByteArray & Expires;
	static const QByteArray & LastModified;
	static const QByteArray & Location;
	static const QByteArray & SetCookie;
	static const QByteArray & TransferEncoding;
	static const QByteArray & ContentDisposition;
	static const QByteArray & AccessControlAllowOrigin;
	static const QByteArray & AccessControlAllowMethods;
	static const QByteArray & AccessControlAllowHeaders;
	static const QByteArray & AccessControlMaxAge;
	// Websocket specific headers
	static const QByteArray & Upgrade;
	static const QByteArray & SecWebSocketKey;
	static const QByteArray & SecWebSocketProtocol;
	static const QByteArray & SecWebSocketVersion;
};

#endif // QTHTTPHEADER_H
